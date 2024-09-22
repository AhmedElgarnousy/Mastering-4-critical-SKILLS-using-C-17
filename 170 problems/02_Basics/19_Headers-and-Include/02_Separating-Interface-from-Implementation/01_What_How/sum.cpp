#include "sum.h"

// Definition
// HOW not What
// This is a slow way
int sum_1_n(int n) {
	int sum = 0;

	for (int i = 0; i < n; ++i)
		sum += i;

	return sum;
}

