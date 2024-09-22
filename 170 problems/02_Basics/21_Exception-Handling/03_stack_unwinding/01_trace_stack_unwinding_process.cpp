#include <iostream>

using namespace std;

/*
stack unwinding is the process that happened behind the scense
when execption thrown in your code
*/

struct Employee
{
    int id;
    Employee(int id__)
    {
        id = id__;
    }
    ~Employee()
    {
        cout << "Employee destroy " << id << "\n";
    }
};

void f4()
{
    cout << "start f4\n";
    Employee *ePtr = new Employee(4);
    throw 1;
    // Memory Leak;
    delete ePtr; // never execute
    cout << "end f4\n";
}
void f3()
{
    cout << "start f3\n";

    Employee emp(3);
    f4();
    cout << "end f3\n";
}

void f2()
{
    cout << "start f2\n";
    try
    {
        f3();
    }
    catch (runtime_error &e)
    {
        // WON"t match - no effect
        cout << e.what() << "\n";
    }
    cout << "end f2\n";
}
void f1()
{
    cout << "start f1\n";
    try
    {
        f2();
    }
    catch (int &e)
    {
        cout << "error code: " << e << "\n";
    }
    cout << "end f1\n";
}
int main()
{
    f1();
    return 0;
}