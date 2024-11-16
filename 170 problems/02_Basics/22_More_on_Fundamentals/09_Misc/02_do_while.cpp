#include <iostream>
using namespace std;

int main() {
	// While loops: Condition first, then Body

	// Do while: Body first, then condition

	int n;
	do {
		cin >> n;
		cout << n << "\n";
	} while (n % 2 == 0);

	return 0;
}
