#include <iostream>

using namespace std;

class Employee
{
private:
    int *salary{nullptr};
    string name;

public:
    Employee() = default;
    Employee(const Employee &) = delete;

    Employee(int salary, string name) : salary(new int{salary}), name(name)
    {
    }
    ~Employee()
    {
        delete salary;
        salary = nullptr;
    }
};

int main()
{
    Employee e1(20, "Ahmed");
    // Line 14 prevents it
    // Employee e2(e1);
    return 0;
}