#include <iostream> // cout
#include <fstream>	// ifstream

using namespace std;

// enum like consts style
// but in easy way maybe

int main()
{

	enum color
	{
		RED,
		GREEB,
		BLUE
	}; // 0, 1, 2

	color r = RED;
	cout << r << "\n"; // 0
	r = color(2);
	cout << r << "\n"; // 2

	enum months1
	{
		JAN = 1,
		FEB,
		MAR,
		APR
	}; // 1, 2, 3, 4
	enum months2
	{
		Feb = 2,
		Mar,
		Apr = 4
	}; // 2, 3, 4

	cout << Mar; // 3

	return 0;
}
