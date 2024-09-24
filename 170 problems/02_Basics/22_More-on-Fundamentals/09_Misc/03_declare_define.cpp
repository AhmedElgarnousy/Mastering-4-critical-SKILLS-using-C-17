#include <iostream>
using namespace std;

// Declare function: What
int factorial(int n);

// Define function: How
int factorial(int n) {
	int ret = 1;
	for (int i = 1; i <= n; ++i)
		ret *= i;

	return ret;
}

int f1(int n);
int f2(int n);

int f1(int n) {
	cout << n << "\n";
	if (n % 2 == 0)
		return 1 + f1(n / 2);

	return f2(n);
}

int f2(int n) {
	cout << n << "\n";
	if (n == 1)
		return 1;

	if (n % 2 == 1)
		return 1 + f1(3 * n + 1);

	return f1(n);
}

int main() {
	cout << f1(5) << "\n";	// what is that?

	return 0;
}
