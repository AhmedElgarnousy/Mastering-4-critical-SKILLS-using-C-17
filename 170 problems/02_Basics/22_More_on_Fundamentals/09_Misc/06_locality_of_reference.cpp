#include <iostream>
using namespace std;

const int SZ = 7000;
int arr[SZ][SZ];

void go_row_order() {
	for (int iter = 0; iter < 10; ++iter)
		for (int i = 0; i < SZ; ++i)
			for (int j = 0; j < SZ; ++j)
				arr[i][j] = (i + j) * (iter + 1);
}

void go_col_order() {
	for (int iter = 0; iter < 10; ++iter)
		for (int j = 0; j < SZ; ++j)
			for (int i = 0; i < SZ; ++i)
				arr[i][j] = (i + j) * (iter + 1);
}

int main() {
	go_row_order();

	return 0;
}
