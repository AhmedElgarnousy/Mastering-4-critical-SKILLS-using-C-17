#include <iostream>
#include "sum.h"
using namespace std;

// important note: main.cpp see only in sum.h not sum.cpp

int main() {

	// hello();
	
	for (int i = 0; i < 3; ++i)
		sum_1_n(10);

	total_calls += 100;

	

	for (int i = 0; i < 3; ++i)
		sum_1_n(10);

	return 0;
}
