#include <iostream>
using namespace std;

/*
- for a non reference or non pointer, always derived class function is called if exits
    but not for pointer/refernece
- with virtual Member function called based on derived class
- when mark function as virtual in base class
- each child func is virtual even if no keyword
- when you use virtual, you expect someone to override the function
- virtual means existing in appearance but not in reality
- with resolution scope ::
    - we call explicit
*/

class Person
{
public:
    virtual void print()
    {
        cout << "Person\n";
    }
    virtual ~Person()
    {
        cout << "~Person\n";
    }
};
class Student : public Person
{
public:
    void print()
    {
        cout << "Student\n";
    }
    ~Student()
    {
        cout << "~Student\n";
    }
};

int main()
{
    Person *stud_ptr3 = new Student();
    stud_ptr3->print();
    stud_ptr3->Person::print(); // Explicit

    delete stud_ptr3;
    return 0;
}