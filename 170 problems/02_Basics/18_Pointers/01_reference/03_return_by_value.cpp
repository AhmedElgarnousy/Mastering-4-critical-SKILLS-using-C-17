#include <vector>
#include <iostream>
using namespace std;

// Return by value
int get_number()
{
	int x = 20;

	// 0x7ffedafa88b4
	cout<<&x<<"\n";

	return x;
	// x will be destroyed after end of function
}

int main() {
	int y = get_number();

	// 0x2faedafa88a1
	cout<<&y<<"\n";

	// y has different address than x

	return 0;
}
