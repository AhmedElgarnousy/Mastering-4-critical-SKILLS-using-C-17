#include <iostream>

using namespace std;

class Person
{
protected:
    string name;

public:
    Person() : name("ahmed")
    {
        cout << "Person Default constructor\n";
    }
    Person(string name) : name(name)
    {
        cout << "Person 2nd constructor\n";
    }
    ~Person()
    {
        cout << "Person Destructor\n";
    }
};
class Student : public Person
{
private:
    double gpa;

public:
    Student()
    { // CE: name("mohamed") you can't access base here
        cout << "Student Default constructor\n";
        gpa = 0;
        name = "mohamed"; // you can set it
    }
    Student(double gpa) : Person("Ali"), gpa(gpa)
    {
        cout << "Student 2nd constructor\n";
    }
    ~Student()
    {
        cout << "Student Destructor\n";
    }
};

int main()
{
    Student student1;
    Student student2(3.0);
    return 0;
}