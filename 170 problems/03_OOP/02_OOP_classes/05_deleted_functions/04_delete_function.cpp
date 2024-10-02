#include <iostream>

using namespace std;

class Employee
{
private:
    int *salary{nullptr};
    string name;

public:
    Employee() = default;
    void Hello(int x) {};
    void Hello(double x) = delete;

    Employee(int salary, string name) : salary(new int{salary}), name(name)
    {
    }
    ~Employee()
    {
        delete salary;
        salary = nullptr;
    }
};

int main()
{
    Employee e1(20, "Ahmed");
    e1.Hello(10);
    // Line 14 prevennts it
    // e1.Hello(10.8);
    return 0;
}