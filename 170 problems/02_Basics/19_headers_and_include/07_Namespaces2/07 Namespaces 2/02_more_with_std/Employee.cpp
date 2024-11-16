#include <iostream>
#include "Employee.h"
namespace OurSystem {

Employee* emp_glob =
		new Employee("mostafa");


Employee::Employee(std::string name_) {
	name = name_;
}

void Employee::Print() {

	std::cout << "I am " << name << "\n";
}


}
