#include <iostream>
#include <algorithm> // for sort()
#include <vector>
#include <tuple> // tie() and tuple

using namespace std;

/*
- test1
    - use tie for easy compare
    -sort(emps.begin(), emps.end()); // overlaoded <
    - great but what if we wanna more flexibiility
    - e.g. sort now based on salary later on namm ?
    - there are 2 ways

- 1st way: test2
    - custom comparator
    - we use function call operator ()
    - similarly, we can create EmployeeComaratorId class

- 2nd way: test3
*/

class Employee
{
public:
    int id;
    int salary;
    string name;

    Employee(int id, int salary, string name) : id(id), salary(salary), name(name)
    {
    }
    bool operator<(const Employee &c2)
    {
        return std::tie(id, salary, name) < std::tie(c2.id, c2.salary, c2.name);
    }

    void print()
    {
        cout << id << " " << name << " " << salary << "\n";
    }
};

void test1()
{
    vector<Employee> emps;
    emps.push_back({9, 500, "ali"});
    emps.push_back({1, 1000, "mostafa"});
    emps.push_back({5, 700, "hani"});

    sort(emps.begin(), emps.end()); // overlaoded <

    for (auto &emp : emps)
        emp.print();
}

class EmployeeCpomparatorSalary
{
public:
    bool operator()(const Employee &c1, const Employee &c2)
    {
        return c1.salary < c2.salary;
    }
};

void test2()
{
    vector<Employee> emps;
    emps.push_back({9, 500, "ali"});
    emps.push_back({1, 1000, "mostafa"});
    emps.push_back({5, 700, "hani"});

    EmployeeCpomparatorSalary comparator = EmployeeCpomparatorSalary();

    sort(emps.begin(), emps.end(), comparator);

    for (auto &emp : emps)
        emp.print();
}
void test3()
{
    vector<Employee> emps;

    emps.push_back({9, 500, "ali"});
    emps.push_back({1, 1000, "mostafa"});
    emps.push_back({5, 700, "hani"});

    sort(emps.begin(), emps.end(), [](const Employee &c1, const Employee &c2)
         { return c1.salary < c2.salary; });

    for (auto &emp : emps)
        emp.print();
}

int main()
{
    // test1();
    // test2();
    test3();
    return 0;
}