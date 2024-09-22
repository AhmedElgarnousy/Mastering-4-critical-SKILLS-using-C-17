#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<iostream>
using namespace std;


struct Employee {
    string name;

    //Declare
    Employee();
    Employee(string name_);
    void print();
};

extern Employee* emp_global;

#endif /* EMPLOYEE_H_ */