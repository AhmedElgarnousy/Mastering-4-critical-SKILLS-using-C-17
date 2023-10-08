/**********************************************************************
                            * STRUCTURE  *
**********************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

struct employee{
  string name;
  int age;
  double salary;
  char gender;

  void read_employee(){
    cout<<"Enter employee 4 entries: ";
    cin>>name>>age;
    cin>>salary>>gender;
  }

  void print_employee(){
    cout<<name<<" has salary "<< salary<<"\n";
  }

  int get_age() {
  		return age;
	}

	void set_age(int new_age) {
		age = new_age;
	}

};

const int MAX = 10000;
employee employee_arr[MAX];
int added = 0;    // Number of employees


void print_employees()
{
  cout<<"******************\n";

  for(int i = 0; i < added; ++i)
    employee_arr[i].print_employee();
}

/************************* Compare Functions *************************/
              
  bool compare_name(employee &a, employee &b){
    return a.name < b.name;  // samller name first
  }

  bool compare_salary(employee &a, employee &b){
    return a.salary > b.salary;  // samller name first
  }

  bool compare_name_salary(employee &a, employee &b){
    if(a.name != b.name)
      return a.name < b.name;  // samller name first
    return a.salary > b.salary;  // samller name first
  }


int main()
{
// read_employee(employee_arr[added++]);
// read_employee(employee_arr[added++]);
// print_employees();

//   employee emp1, emp2;
//   emp1.name = "Ahmed";
//   emp2.name = "ahmed";

// cout<< compare_name( emp2, emp1)<<"\n";
// cout<< compare_name( emp1, emp2);

int arr[5] = {5,1,3,2,4};
sort(arr, arr+5);

for(int i = 0; i < 5; ++i){
  cout<<arr[i]<<" ";
}
cout<< "\n";

employee_arr[added++].read_employee();
employee_arr[added++].read_employee();
employee_arr[added++].read_employee();

sort(employee_arr, employee_arr + added, compare_name);
print_employees();

sort(employee_arr, employee_arr + added, compare_salary);
print_employees();

sort(employee_arr, employee_arr + added, compare_name_salary);
print_employees();

  
  return 0;
}