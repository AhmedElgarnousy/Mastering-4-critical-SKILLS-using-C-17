#include <iostream>
using namespace std;

/*
- we have same name function in base and derived class
called print
- for a non reference or non pointer, always derived class function is called if exits
    but not for pointer/refernece
- Member function called based on Pointer type

*/

class Person
{
public:
    void print()
    {
        cout << "Person\n";
    }
    ~Person()
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
    Person person;
    Student student;
    // person.print();
    // student.print();

    Person *per_ptr = &person;
    Student *student_ptr1 = &student;
    // per_ptr->print();
    // student_ptr1->print();

    Person *student_ptr2 = &student;
    Person *student_ptr3 = new Student();

    student_ptr2->print(); // call Person not Student
    student_ptr3->print(); // call Person not Student

    delete student_ptr3; // Memory Leak

    return 0;
}