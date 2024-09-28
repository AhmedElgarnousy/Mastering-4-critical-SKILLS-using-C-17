#include <iostream>
using namespace std;

struct QueueInt {
	int arr[100];

	// some functionalities using type integer
};

struct QueueDouble {
	double arr[100];

	// exactly same as above, but replace integer with double
};

struct QueueString {
	string arr[100];

	// exactly same as above, but replace integer with string
};






/*

The clear problem is the code duplication. DRY (Don’t Repeat Yourself)

In Stl we used something called template, a C++ mechanism
queue<int>
queue<double>
queue<string>

we write the queue one, but somehow we work on general type instead of a specific type

*/