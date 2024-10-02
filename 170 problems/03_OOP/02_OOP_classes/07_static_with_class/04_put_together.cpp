#include <iostream>
#include <vector>
using namespace std;

// Apractical example where we wanna
// know # of employees

class Employee
{
private:
	string name;
	static int employee_count;

public:
	Employee(string name) : name(name)
	{
		++Employee::employee_count;
	}
	static int GetEmployee_count()
	{
		return Employee::employee_count;
	}
};
int Employee::employee_count = 0;

int main()
{
	Employee e1{"Ahmed"};
	Employee("Sara");
	static Employee e3("belal");
	// static e3 is just like any static variable
	// avalable till program ends

	cout << Employee::GetEmployee_count() << "\n"; // 3
	cout << e3.GetEmployee_count() << "\n";		   // 3

	return 0;
}
