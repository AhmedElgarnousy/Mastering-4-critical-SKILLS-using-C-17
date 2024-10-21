#include <iostream>
#include <memory>

using namespace std;

class Person
{
public:
    virtual ~Person() {}
};

class Employee : public Person
{
};

int main()
{
    shared_ptr<Person> base = make_shared<Employee>();

    shared_ptr<Employee> EmpChild1 = dynamic_pointer_cast<Employee>(base);

    if (EmpChild1)
    {
        cout << base.use_count() << " " << EmpChild1.use_count() << "\n"; // 2 2
    }
    // Also see static_pointer_cast

    // No casting for unique, You have to do it with normal way
    unique_ptr<Person> base_u = make_unique<Employee>();
    Employee *EmpChild2 = dynamic_cast<Employee *>(base_u.get());

    // Don't do with shared ptr. as refernece counter don't increase

    return 0;
}