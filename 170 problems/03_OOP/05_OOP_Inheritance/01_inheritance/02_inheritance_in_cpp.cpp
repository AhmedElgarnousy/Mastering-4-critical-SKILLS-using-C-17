#include <iostream>
using namespace std;

/*
OO has 2 reusability approaches: inheritance and compostion
- Inheritance: `Is a relationship` can be hierarchy
    - Manager is an employee
- Composition: `has a relationship`
    - Car has an engine

*/
class Person
{
public:
    string name = "Ahmed";
    string email = "Ahmed@gmail.com";

    bool IsValidEmailFormat()
    {
        return true;
    }
};

class Student : public Person
{
private:
    double GPA;

public:
    void PrintGrades()
    {
        cout << name << " GPA=" << GPA << "\n";
    }
    void SetGPA(double gpa)
    {
        GPA = gpa;
    }
};

/*
- This is called public inheritance
- Person Class called (Parent, `Base`, Superclass, General)
- Student Class called (Child, `Derived`, Subclass, Specific)
*/

int main()
{
    Student student;
    // student is a person
    student.SetGPA(2.99);
    student.IsValidEmailFormat();
    student.PrintGrades();

    // Person is not necessarily a student
    Person person;
    person.IsValidEmailFormat();
    // person.PrintGrades(); Not student

    return 0;
}