#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
using namespace std;

// Declare Employee inside OurSystem
namespace OurSystem {

struct Employee {
	string name;

	// Declare
	Employee(string name_) ;
	void Print();
};

extern Employee* emp_glob;

}


#endif /* EMPLOYEE_H_ */
