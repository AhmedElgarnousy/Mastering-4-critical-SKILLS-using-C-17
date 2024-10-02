#include <iostream>
#include <vector>
using namespace std;
/*
// class has static data member
- declared in class and defined outside it
- available till program ends
- this data will be shared between all objects
*/

class Test
{
public:
	static int x; // Declare: shared among all objects
};

int Test::x = 0; // define outside

void f()
{
	Test::x += 10; // same x
}

int main()
{

	Test::x += 1; // Access
	f();
	cout << Test::x << "\n"; // 11
	return 0;
}
