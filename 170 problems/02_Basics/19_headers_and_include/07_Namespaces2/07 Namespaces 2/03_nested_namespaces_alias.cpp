#include <iostream>

namespace OurSystem {
	namespace Customer {
		int limit = 1;
	}
	namespace Admin {
		int limit = 10;
	}
}

// C++17 simplifies nested namespace
/*
namespace OurSystem :: Customer {
	int limit = 10;
}
 */

int main() {
	std::cout << OurSystem::Customer::limit << "\n";

	namespace scope = OurSystem::Customer;	// alias
	std::cout << scope::limit << "\n";

	return 0;
}
