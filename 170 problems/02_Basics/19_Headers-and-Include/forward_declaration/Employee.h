#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <vector>
using namespace std;

#include "Department.h"

struct Employee 
{
  string name;
  vector<Department* > deps;

  //Declare
  Employee(string name_);
  void print();
};

#endif /*EMPLOYEE_H_*/