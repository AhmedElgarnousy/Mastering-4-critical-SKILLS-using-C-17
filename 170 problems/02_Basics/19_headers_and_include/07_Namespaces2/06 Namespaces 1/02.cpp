#include <iostream>
using namespace std;

namespace Customer {
int first = 1, second = 2;
}

namespace Admin {
int total = 5;
}

// Let first be visible through whole file
using Customer::first;

int main() {
	// Easier for repetitive usage
	// But be careful of local collisions
	cout << first << "\n";
	cout << first << "\n";

	//second NOT visible
	//cout << second << "\n";
	//cout << second << "\n";

	// Let total be visible through the function
	using Admin::total;
	cout << total << "\n";

	return 0;
}
