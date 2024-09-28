#include <iostream>
using namespace std;

namespace Customer {
int first = 1, second = 2;
}

namespace Admin {
int total = 5;
}

// More flexible, BUT all inside Customer is visible!
using namespace Customer;

int main() {
	cout << first << "\n";
	cout << first << "\n";
	cout << second << "\n";
	cout << second << "\n";

	using Admin::total;
	//using namespace Admin;	// ok too
	cout << total << "\n";

	return 0;
}
