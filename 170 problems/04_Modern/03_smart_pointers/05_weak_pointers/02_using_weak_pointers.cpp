#include <iostream>
#include <memory>
#include <vector>
using namespace std;

/*
1. Create a shared pointer
2. Create weak pointer from the shared pointer
    - pointer to pointer
*/

struct Department;

struct Employee
{
    weak_ptr<Department> department;
    ~Employee() { cout << "Destory Emp\n"; }
};

struct Department
{
    // Logic: Department is the actual OWNER
    vector<shared_ptr<Employee>> emps;
    ~Department() { cout << "Destroy Department\n"; }
};

int main()
{
    shared_ptr<Employee> e = make_shared<Employee>();

    // 1) Create shared, 2) then assign/construct to weak ptr
    shared_ptr<Department> d = make_shared<Department>();
    e->department = d; // Assign shared to weak
    // e->department = weak_ptr<Department>(d); // or

    d->emps.push_back(e);

    // weak from weak
    weak_ptr<Department> d2 = weak_ptr<Department>(e->department);

    return 0;
}