#include <iostream>
using namespace std;

struct Employee {
	string name;

	// Declare
	Employee(string name_) ;
	void Print();
};

Employee::Employee(string name_) {
	name = name_;
}

//  Define
void Employee::Print() {
	cout << "I am " << name << "\n";
}

int main() {
	Employee e("Mostafa");

	e.Print();

	return 0;
}
