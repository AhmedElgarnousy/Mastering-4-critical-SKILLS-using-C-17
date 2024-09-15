#include<iostream>

using namespace std;


int main()
{
  const int EmpMaxSize {100};

  string EmployeeNames [EmpMaxSize];
  int EmployeeAges [EmpMaxSize];
  int EmployeeSalaries [EmpMaxSize];
  char EmployeeGenders [EmpMaxSize];

  int UserInput, StartAge, EndAge;
  int NoOfEmployees {-1};
  string EmpName ;
  int UpdatedSalary;


  while(1)
  {
  // Display the following choices  
  cout<<"\n Enter your choice:\n"<< 
        "1) Add new employee \n"<<
        "2) Print all employees\n"<<
        "3) Delete by age\n"<<
        "4) Update Salary by name \n";

       
        cin>>UserInput; // take user choice
        if(UserInput == 1)
        {
            // 1) Add new employee
            
            // Ask user to input: Name, Age, Salary and Gender letter
            NoOfEmployees ++;
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
        else if(UserInput == 2)
        {
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
            if(EmployeeNames[NoOfEmployees] != "Deleted")
            {
              cout<<EmployeeNames[i]<<" "<<EmployeeAges[i]<<" "<<EmployeeSalaries[i]<<" "<< EmployeeGenders[i]<<"\n";
            }
          }
        }
        else if(UserInput == 3)
        {
          // For choice 3: User enter two values, start age and end age
         //  Find all employees with: start_age <= age <= end_age and remove them
         
         cout<<"Enter start and end age: ";
         cin>>StartAge>>EndAge;

         for(int i = 0; i <= NoOfEmployees; i++)
         {
          if(EmployeeAges[i] >= StartAge && EmployeeAges[i] <= EndAge)
          {
            // Remove them
           // NoOfEmployees --;
            EmployeeNames[i] = "Deleted";
          }
         }
        }
        else if(UserInput == 4)
        {
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
        else 
        {
            cout<<"InValid Input\n";
        }

  }
  return 0;
}