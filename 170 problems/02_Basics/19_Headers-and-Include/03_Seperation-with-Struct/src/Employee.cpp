#include"Employee.h"

Employee* emp_global = new Employee("Ahmed");

// define
Employee::Employee(){}
Employee::Employee(string name_){
    name = name_;
}
void Employee::print(){
    cout<<"I am "<<name<<"\n";
}
