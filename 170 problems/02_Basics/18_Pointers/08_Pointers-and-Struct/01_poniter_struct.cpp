#include<iostream>
using namespace std;

struct Employee
{
    int id =-1;
    string name;

    Employee(){}
    
    Employee(int id, string name):id(id), name(name){

    }

    void print()
    {
        cout<<id<<" "<<name<<"\n";
    }
};

int main()
{
    Employee e1 (10, "Ahmed");
    e1.print(); // 10 ahmed

    Employee * e2  {new Employee(20, "belal")};
    e2->print(); // 20 belal
   
    Employee * e3  {new Employee()};
    (*e3).print(); // -1
    // e3->print(); // -1

    Employee* e4 = e2; // not &e2 because it pointer
    cout<<e4->id<<"\n";

    Employee* e5 { &e1 }; // not e1 because e1 is object

    // reference
    Employee& e6 = *e2; 
    e2->id = 111;
    e6.print();  // 111 belal

    vector<Employee*> vec;
    vec.push_back(e2); // e2 is pointer
    vec.push_back(&e6); // e6 object alias

    // delete ONLY the "new " created
    delete e2;
    delete e3;
    e2 = e3 = nullptr;

    return 0;
}