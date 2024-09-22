
#include "Employee.h"

Employee* emp_glob = new Employee("mostafa");


Employee::Employee(string name_) {
	name = name_;
}

void Employee::Print() {

	cout << "I am " << name << "\n";
}


// but we did not include cout and string?
//		visible from the .h file
