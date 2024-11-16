
#include "Employee.h"

namespace OurSystem {

Employee* emp_glob = new Employee("mostafa");


Employee::Employee(string name_) {
	name = name_;
}

void Employee::Print() {

	cout << "I am " << name << "\n";
}

}
