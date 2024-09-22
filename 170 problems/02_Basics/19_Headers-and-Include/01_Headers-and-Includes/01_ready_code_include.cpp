
// These includes has code READY for you

#include <iostream>		// cout
#include <cmath>		// sqrt()
#include <vector>		// vector
using namespace std;

// Can we make this function available for others?
// How to make it like the #include ??
int sum_1_n(int n) {
	int sum = 0;

	for (int i = 0; i < n; ++i)
		sum += i;

	return sum;
}

int main() {
	cout << sqrt(25) << "\n";
	vector<int> v;

	cout << sum_1_n(5) << "\n";

	return 0;
}
