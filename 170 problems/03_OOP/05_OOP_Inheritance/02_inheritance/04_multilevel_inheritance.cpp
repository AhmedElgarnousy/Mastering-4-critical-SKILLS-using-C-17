#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
};
class Student : public Person
{
protected:
    string student_id;
};
class Graduate : public Student
{
protected:
    int graduation_year;

public:
    void reset()
    {
        name = student_id = "";
    }
};

int main()
{
    Graduate fresh;
    // fresh.graduation_year = 2024; // can't from outsiders
    return 0;
}