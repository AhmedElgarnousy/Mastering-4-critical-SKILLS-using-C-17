#include <iostream>
#include <vector>
#include <memory>
using namespace std;

struct Department;
struct Employee
{
    weak_ptr<Department> department;
    void print(); // you can't define. Incomplete.
};
struct Department
{
    vector<shared_ptr<Employee>> employees;
};
void Employee::print()
{
    // department->employess; // CE; -> has non-pointer type

    // Make sure original NOT removed
    if (!department.expired())
    {
        shared_ptr<Department> dep_orig = department.lock();
        cout << "Emp count " << dep_orig->employees.size() << "\n";
    }
    else
    {
        cout << "Expired\n";
    }
}

int main()
{
    shared_ptr<Employee> e = make_shared<Employee>();
    shared_ptr<Department> d = make_shared<Department>();

    d->employees.push_back(e);
    e->department = d;
    e->print(); // Emp count 1
    d = nullptr;
    e->print(); // expired

    return 0;
}