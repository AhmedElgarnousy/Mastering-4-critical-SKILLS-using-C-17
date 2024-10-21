#include <iostream>
#include <memory> // smart pointer

using namespace std;

// make_unique is a helper function

class Employee
{
    unique_ptr<int> &id;
    string name;

public:
    Employee(unique_ptr<int> &id, string name) : id(id), name(name)
    {
    }
    void print()
    {
        cout << "Employee id: " << *id << "\n";
    }
};

void test()
{
    unique_ptr<int> p1{new int{20}};
    unique_ptr<int> p2 = make_unique<int>(20);
    auto p3 = make_unique<int>(20);

    unique_ptr<Employee> ahm{new Employee(p1, "ahmed")};

    auto emp = make_unique<Employee>(p1, "mohaned");
    emp->print(); // Employee id 20
    emp.get();    // Notice . and ->
}

int main()
{
    test();

    return 0;
}