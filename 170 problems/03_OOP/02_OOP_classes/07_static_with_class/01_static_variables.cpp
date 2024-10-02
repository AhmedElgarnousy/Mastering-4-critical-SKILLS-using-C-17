#include <iostream>
#include <vector>
using namespace std;

void hello()
{
	int i1 = 0; //  local variable
	// static local variable
	static int i2 = 0;
	// in memory till program ends
	// shared among different access to its block(function calls)

	cout << i1 << " " << i2 << "\n";
	i1++;
	i2++;
}

int main()
{
	hello();
	hello();
	hello();
	return 0;
}

// 0 0
// 0 1
// 0 2
