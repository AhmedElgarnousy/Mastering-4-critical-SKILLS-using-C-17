#include <iostream>
using namespace std;

struct Employee {
	string name;

	Employee(string name_) {
		name = name_;
	}

	// Declare and Define
	void Print() {
		cout << "I am " << name << "\n";
	}
};

int main() {
	Employee e("Mostafa");

	e.Print();

	return 0;
}
