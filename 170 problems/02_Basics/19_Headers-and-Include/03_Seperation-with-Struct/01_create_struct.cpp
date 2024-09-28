#include<iostream>
using namespace std;

struct Employee {
    string name;
    Employee(){}
    Employee(string name_){
        name = name_;
    }
    // Declare and define
    void print(){
        cout<<"I am "<<name<<"\n"
;    }
};

int main()
{
    Employee e1;
    e1.print();
    Employee e2("Ahmed");
    e2.print();
    return 0;
}