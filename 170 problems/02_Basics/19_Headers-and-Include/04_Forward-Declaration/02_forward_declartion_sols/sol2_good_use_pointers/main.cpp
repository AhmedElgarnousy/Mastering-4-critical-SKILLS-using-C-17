#include <iostream>
#include "Employee.h"
#include "Department.h"
using namespace std;


// sol2 
// we separate each class in header file
// and use the forward declartion before other
// use pointer instead of include the header file
// of the forward declared one 

int main() {
	Employee e1("Mostafa");
	Employee e2("Ali");
	
	Department* dep = new Department();
	dep->name = "CS";
    
	e1.deps.push_back(dep);
	e2.deps.push_back(dep);


	dep->emps.push_back(e1);
	dep->emps.push_back(e2);

	cout<<dep->name<<"\n"; // CS
	// cout<<dep->emps.back().name<<"\n"; // Ali
	//cout<<dep->emps.front().name<<"\n"; // mostafa

	dep->emps.back().Print(); // Ali
	dep->emps.front().Print(); // mostafac
	
	// dep->PrintDepartment();






	return 0;
}
