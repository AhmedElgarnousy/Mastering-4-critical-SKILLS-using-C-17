#include <iostream>
#include <memory>
#include <vector>

using namespace std;

/*
1. Guess the output
- Let's uncomment 24
2. Guess the output
- Run. Compile. Think
*/
struct Department;

struct Employee
{
    shared_ptr<Department> departmet;
    ~Employee() { cout << "Destroy Emp\n"; }
};
typedef shared_ptr<Employee> EmpPtr;
typedef vector<EmpPtr> empVec;

struct Department
{
    empVec Employees;
    ~Department()
    {
        cout << "Destory Department\n";
    }
};

int main()
{
    EmpPtr e = make_shared<Employee>();
    shared_ptr<Department> d = make_shared<Department>();
    e->departmet = d;
    // d->Employees.push_back(e);
    return 0;
}