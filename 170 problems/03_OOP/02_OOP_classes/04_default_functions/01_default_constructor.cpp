#include <iostream>
using namespace std;
// we alreday said that
// if you provided a parameterized constructor
// you cannot call default constructor unless you
// provided it

// line 17: in c++11 has Defaulted default constructor
//  now code compiles
class Employee
{
private:
    int *salary{nullptr};
    string name;

public:
    // Employee() = default;
    Employee(int salary, string name) : salary(new int{salary}), name(name) {

                                        };
    // or Employee(int salary, string name) : name(name)
    //  {
    //      this->salary = new int;
    //      *this->salary = salary;
    //      // or salary = new int{salary};
    //  };
    ~Employee()
    {
        delete salary;
        salary = nullptr;
    }

    void print()
    {
        cout << *salary << " " << name << "\n";
    }
};

int main()
{
    Employee e1(100, "Ahmed");
    e1.print();
    // CE: no matching function for call to employee
    // Employee e2;
    return 0;
}