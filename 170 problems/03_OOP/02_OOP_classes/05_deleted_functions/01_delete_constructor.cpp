#include <iostream>

using namespace std;
/*
// Delete a constructor
- we can easily delete a specific functions
    - copy constructor
    - assignment operator
    - normal member functions (e.g. prevent type conversions)
- later: explicit constructor tp prevent conversions
*/

class Employee
{
private:
    int *salary{nullptr};
    string name;

public:
    Employee() = default;
    Employee(double salary, string name) = delete;

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
    // Line 21 prevennts it
    // Employee e1(10.6, "Ahmed");
    return 0;
}

/*
// Tips for beggineers
- if u have a class with pointer member variables
- delete copy constructor
- delete assignment operator
- this will warn u when u wanna create/assign object
- or feel free to provide copy constructor
    - but you must diable for now assignment operator
    - later in operator overloading we will learn
        how to code it
    - i warned u ...remember:)

*/