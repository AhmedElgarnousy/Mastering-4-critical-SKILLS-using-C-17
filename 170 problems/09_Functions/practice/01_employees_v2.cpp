#include <iostream>

using namespace std;


/*******************************************************
                * Global Variables *
*******************************************************/
const int EmpMaxSize {100};
string EmployeeNames [EmpMaxSize];
int NoOfEmployees {-1};
int EmployeeAges [EmpMaxSize];
int EmployeeSalaries [EmpMaxSize];
char EmployeeGenders [EmpMaxSize];
string EmpName ;
int UpdatedSalary;


/**********************************************************
             *  Functions Implementations   *
**********************************************************/

int menu()
{
  int UserInput = -1;

  while(UserInput == -1){
    // Display the following choices  
      cout<<"\n Enter your choice:\n"<< 
        "1) Add new employee \n"<<
        "2) Print all employees\n"<<
        "3) Delete by age\n"<<
        "4) Update Salary by name \n";
        cin>>UserInput; // take user choice

  if(!(1<= UserInput && UserInput <= 5)){
    cout<<"Invalid Choice.  Try again\n";
    UserInput = -1;
  }
  }
  return UserInput;
}

void read_employee()
{
  // 1) Add new employee
            NoOfEmployees ++;
            
            // Ask user to input: Name, Age, Salary and Gender letter
            // require its name , tore its name
            cout<<"Enter Name: ";
            cin>>EmployeeNames[NoOfEmployees];

            cout<<"Enter Age: ";
            cin>>EmployeeAges[NoOfEmployees];

            cout<<"Enter Salary: ";
            cin>>EmployeeSalaries[NoOfEmployees];

            cout<<"Enter gender(M/F):";
            cin>>EmployeeGenders[NoOfEmployees];

            cout<<"\n";

}

void print_employees(){
  // For choice 2: Print all employees. Line per employee
          if(NoOfEmployees == -1)
          {
            // if user enter 2 in before adding employees
            cout<<"No Existing Employees \n";
          }
          // show the existing employess
          cout<<"***********************************\n";
          for(int i = 0; i <=  NoOfEmployees; ++i)
          {
            if(EmployeeAges[i] != -1)
            {
              cout<<EmployeeNames[i]<<" "<<EmployeeAges[i]<<" "<<EmployeeSalaries[i]<<" "<< EmployeeGenders[i]<<"\n";
            }
          }
}


void delete_by_age(){
   // For choice 3: User enter two values, start age and end age
         //  Find all employees with: start_age <= age <= end_age and remove them
         
         cout<<"Enter start and end age: ";
         int StartAge, EndAge;
         cin>>StartAge>>EndAge;

         for(int i = 0; i <= NoOfEmployees; ++i)
         {
          if((EmployeeAges[i] >= StartAge && EmployeeAges[i] <= EndAge))
          {
            // Remove them
           // NoOfEmployees --;
            EmployeeAges[i] = -1;
          }
         }
}

void update_by_salary(){
  // For choice 4: User enter name, then salary and update its salary
          cout<<"Enter the name and salary ";
          cin>>EmpName>>UpdatedSalary;
          for(int i = 0; i <= NoOfEmployees; i++)
          {
            if (EmployeeNames[i] == EmpName)
            {
              EmployeeSalaries[i] = UpdatedSalary;
            }
          }
}

  /*
  */
  void employee_system ()
  {
    while(true)
    {
      int choice = menu();

      if(choice == 1)
        read_employee();
      else if(choice == 2)
        print_employees();
      else if(choice == 3)
        delete_by_age();
      else if(choice == 4)
        update_by_salary();
      else 
        break;

    }
  }


  int main()
  {
   // freopen("c.in", "rt", stdin);
    employee_system();
    return 0;
  }
