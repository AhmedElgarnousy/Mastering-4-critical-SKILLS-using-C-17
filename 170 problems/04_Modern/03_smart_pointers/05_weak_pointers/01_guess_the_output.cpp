#include <iostream>
#include <memory>
#include <vector>

using namespace std;
// code shows the shared pointers may be abit problemitic
/*
- The core problem here is the `circular reference`
    - Employee has a department which has the employee
- sadly the reference count of both of them will remain > 0
    - Never released
    - Memory Leak!
- So?! week pointers comes
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
    empVec employees;
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
    d->employees.push_back(e);

    // we are about to go out of scope
    // e waiting for d destruction to be released
    // d waiting for e destruction to be released
    cout << e.use_count() << " " << d.use_count() << "\n";

    return 0;
}