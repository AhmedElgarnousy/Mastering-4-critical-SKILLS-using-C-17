#include <iostream>
using namespace std;

int frecursive1() {
	return frecursive1();
}

int frecursive2(int n) {
	int arr[100] {1, 6, 7, 8};
	if(n < 0)
		return 1;
	return 1 + frecursive2(n-1);
}

int* fun(int n) {
	int* ptr1 = new int [n] {1, 3, 5, 7, 9};
	int* ptr2 = new int [7] {1, 3, 5, 7, 9, 10, 11};

	// ptr1 and ptr2: local vars in the stack
		// Consecutive in memory

	// allocated data where ptr1/ptr2 points in the HEAP
		// ptr1 and ptr2 may not have sequential addresses

	delete[] ptr2;
	// the memory is “returned” to the heap to REUSE

	return ptr1;	// ok to return. not on stack. no destroying
}
int main() {
	int* p = fun(10);
	delete[] p;	// manage by yourself

	frecursive2(1000000);
	cout<<"bye\n";
	return 0;
}
