#include <iostream>
using namespace std;

inline int mymax(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	// call replaced with function
	cout << mymax(2, 3);

	// use inline if
	//  short function
	//  called many times

	return 0;
}
