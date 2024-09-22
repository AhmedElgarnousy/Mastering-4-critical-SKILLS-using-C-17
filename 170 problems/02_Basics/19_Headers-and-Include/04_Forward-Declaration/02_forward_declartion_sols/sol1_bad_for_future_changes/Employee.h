#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <vector>
using namespace std;

// Forward declaration
// Declare Department which later will be
// Declared/Defined

struct Department;

struct Employee {
	string name;
	vector<Department> deps;

	// Declare
	Employee(string name_);
	void Print();
};

struct Department {
	string name;
	vector<Employee> deps;

	void PrintDepartment();
};

extern Employee* emp_glob;

#endif /* EMPLOYEE_H_ */
