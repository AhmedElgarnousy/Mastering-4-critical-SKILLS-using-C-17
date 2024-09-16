#include <iostream>
using namespace std;
/*
3 cases when using const with pointers
1) pointer to consts (CAN'T change data(value of it's address) it points to)
2) const pointers (can't change pointer value itself)
3) const pointers to consts (can;t change the date(the value of it's address) or the pointer value(address))
*/
int main() {

	int val1 = 20;
	int val2 = 30;

	// The data type is const int, so pointer must be const int*
	const int val3 = 40;

	// 1) Pointer to constant
	const int* ptr1 = &val1;
	//*ptr = 20;	CAN'T change data(value of it's address) it points to

	// But can change pointer value(it's address) itself.
	// Notice also val3 is const int
	ptr1 = &val3;

	/////////////////////////////////////////////
	// 2) Constant pointers
	int * const	ptr2 = &val2;
	*ptr2 = 11;		// Ok
	//ptr2 = &val1;	// NO Pointer itself is constant

	// CAN'T. val3 is const int, and we must use const int*
	//int * const ptr3 = &val3;

	/////////////////////////////////////////////

	// 3) Const pointers to const
	const int * const ptr4 = &val1;
	//*ptr4 = 10;		// can't change data it points to
	//ptr4 = &val3;		// can't change its value





	return 0;
}
