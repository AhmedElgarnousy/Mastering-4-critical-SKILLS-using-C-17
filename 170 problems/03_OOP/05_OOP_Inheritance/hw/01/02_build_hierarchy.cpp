#include <iostream>
using namespace std;

/*
Homework 2: Build Hierarchy
- Design set of classes (no data/functions) to
express this classes hierarchy
*/
class CommunityMemeber
{
};
class Employee : public CommunityMemeber
{
};
class Student : public CommunityMemeber
{
};
class Alumnus : public CommunityMemeber
{
};
class Faculty : public Employee
{
};
class Staff : public Employee
{
};
class Administrator : public Faculty
{
};
class Teacher : public Faculty
{
};
class AdministratorTeacher : public Teacher, public Administrator
{
};

int main()
{
    return 0;
}