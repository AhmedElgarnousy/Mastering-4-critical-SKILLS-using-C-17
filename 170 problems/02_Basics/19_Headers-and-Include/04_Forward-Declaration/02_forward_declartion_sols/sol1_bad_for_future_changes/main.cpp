#include <iostream>
#include "Employee.h"
using namespace std;

// sol1 which is bad for future changes
// we implement them in same file and 
// declare one of them before other (forward declartion)

int main() {
	emp_glob->Print();

	return 0;
}
