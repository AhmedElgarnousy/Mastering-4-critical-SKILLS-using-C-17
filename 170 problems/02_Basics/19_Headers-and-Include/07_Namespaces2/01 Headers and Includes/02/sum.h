#ifndef SUM_H_
#define SUM_H_

int sum_1_n(int n) {
	int sum = 0;

	for (int i = 0; i < n; ++i)
		sum += i;

	return sum;
}

#endif /* SUM_H_ */
