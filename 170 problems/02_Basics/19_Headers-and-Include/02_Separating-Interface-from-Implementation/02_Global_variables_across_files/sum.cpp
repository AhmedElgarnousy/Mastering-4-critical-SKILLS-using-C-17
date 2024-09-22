#include <iostream>
#include "sum.h"
using namespace std;

// Initialize the extern variable
int total_calls = 0;
// total_calls = 0; // Wrong 

int sum_1_n(int n) {
	++total_calls;

	cout << "Total_calls " <<
			total_calls << "\n";
	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum += i;
	return sum;
}

// void hello()
// {
// 	cout<<"can you see me\n";
// }

