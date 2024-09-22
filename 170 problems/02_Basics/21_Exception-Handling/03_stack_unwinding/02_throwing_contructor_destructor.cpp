#include <iostream>

using namespace std;

// you can not use error code here so contructor
// doesn't have a return type
struct Name
{
    string first;
    Name() {}
    Name(string first_)
    {
        first = first_;
    }
    ~Name()
    {
        cout << "Name Destructor: " << first << "\n";
    }
};

struct Employee
{
    Name *full_name1{};
    Name full_name2;

    Employee()
    {
        full_name1 = new Name("Ahmed");
        throw 0; // memory leak
        full_name2.first = "Belal";
    }

    ~Employee()
    { // Never called
        delete full_name1;
        cout << "Destory Employee \n";
    }
};

int main()
{
    try
    {
        Employee();
    }
    catch (...)
    {
    }
    return 0;
}