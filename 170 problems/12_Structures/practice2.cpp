/**********************************************************************
                            * PRACTICE  *
**********************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;


/*  Single Responsiblity Principle  */
struct full_name
{
  string first, middle, last;

  full_name(string _first, string _last=" "){
    first = _first;
    last = _last;
    middle = "";
  }

  void read()
  {
    cout<<"Enter first middle last names";
    cin>>first>>middle>>last;
  }
};


struct employee
{
  full_name emp_name;
  int age;
  double salary;
  
  void read(){
    emp_name.read();
    cout<<"Enter employee age & salary: ";
    cin>>age >> salary;
  }

  void print(){
    cout<<emp_name.first<<"has salary"<< salary<< "\n";
  }
};




int main()
{
//  employee emp1;
//  emp1.emp_name.first = "Ahmed";   
//  emp1.emp_name.middle = "Kamal";   
//  emp1.emp_name.last = "El garnousy";   

//  emp1.age = 22;

//  cout<<emp1.emp_name.first<<" "<< emp1.emp_name.middle <<" "<<emp1.emp_name.last<<"\n";
//  cout<<emp1.age;

full_name my_name("ahmed");
cout<<my_name.first<<"\n";

full_name his_name("mostafa", "mohand");
cout<<his_name.first<<"\n";
cout<<his_name.last<<"\n";

  return 0;
}