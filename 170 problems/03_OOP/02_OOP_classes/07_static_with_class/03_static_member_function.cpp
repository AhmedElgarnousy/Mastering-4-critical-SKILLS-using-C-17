#include <iostream>
#include <vector>
using namespace std;
/*
// class has static member function
- this means it can't access non-static data member
*/
class Test
{
public:
	int x;
	// static int x;
	static int factorial(int n)
	{
		// x = 10; // can't access member data
		int res = 1;
		for (int i = 1; i <= n; i++)
		{
			res *= i;
			// 4 3
		}
		return res;
	}
};

int main()
{
	cout << Test::factorial(5) << "\n";

	return 0;
}
