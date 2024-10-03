#include <iostream>
#include <vector>
using namespace std;

class Student
{
protected:
    double gpa;
};
class Teacher
{
protected:
    double salary;
};

class TeachingAssistant : public Student, public Teacher
{
private:
    vector<int> courses_ids;
    void func()
    {
        gpa = 3;
        salary = 3000.0;
    }
};
int main()
{
    return 0;
}