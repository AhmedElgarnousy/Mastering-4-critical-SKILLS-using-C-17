#include<iostream>
using namespace std;

struct Employee {
    string name;

    //Declare
    Employee();
    Employee(string name_);
    void print();
};

// define
Employee::Employee(){}
Employee::Employee(string name_){
    name = name_;
}
void Employee::print(){
    cout<<"I am "<<name<<"\n";
}

int main()
{
    Employee e1;
    e1.print();
    Employee e2("Ahmed kamal");
    e2.print();
    return 0;
}