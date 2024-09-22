#ifndef DEPARTENT_H_
#define DEPARTENT_H_

#include <iostream>
using namespace std;

#include "Employee.h"

struct Department {
        string name;
        vector<Employee> deps;

        void PrintDepartment();
};


#endif /*DEPARTENT_H_*/ 