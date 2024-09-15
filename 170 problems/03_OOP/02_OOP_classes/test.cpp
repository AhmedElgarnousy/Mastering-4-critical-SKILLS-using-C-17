#include<iostream>
using namespace std;

class Employee{
    private:
        int * salary {nullptr};
        string name;
    public:
    Employee() = default;
    Employee& operator = (const Employee&) = delete;
    string get_name()
    {
        return name;
    }
    Employee(int salary, string name): 
                            salary(new int {salary}), name(name)
    {
    }
    ~Employee()
    {
    }
};

int main()
{
    Employee emp0 (10, "ahmed");
    Employee emp1 ;
    cout<<emp1.get_name()<<"\n";
    cout<<emp0.get_name()<<"\n";
    // emp1 = emp0;

    cout<<emp1.get_name()<<"\n";
    cout<<emp0.get_name()<<"\n";
    return 0;
}