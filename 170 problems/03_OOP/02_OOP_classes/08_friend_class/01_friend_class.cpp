#include <iostream>
#include <vector>
using namespace std;

/*
// Aclass that has the permissions to access our private data
- Here B is A's friend
- inside B, it can access A private section (variables & functions)
*/
class A
{
private:
	int a1_private = 10;
	int a2_private = 20;

	void HiddenA()
	{
		cout << "I am hidden fn\n";
	}

public:
	// Friend class: Access its private section
	int get_a1_private()
	{
		return a1_private;
	}
	friend class B;
};

class B
{
public:
	void AccessA1(A &x)
	{
		x.a1_private = 1;
		cout << x.a1_private << "\n";
	}
	void AccessA2(A &x)
	{
		cout << x.a2_private << "\n";
		x.HiddenA();
	}
};
int main()
{
	A a;
	B b;
	b.AccessA1(a);
	b.AccessA2(a);

	// cout << a.get_a1_private() << "\n";
	return 0;
}
