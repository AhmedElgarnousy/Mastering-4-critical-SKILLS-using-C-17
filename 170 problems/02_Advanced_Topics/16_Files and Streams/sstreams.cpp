#include <iostream>
#include<sstream>   // istringstream ostringstream
using namespace std;



int main()
{
  /*
  // istringstream
  string str = "Mostafa 23 years";
  istringstream iss(str);

  string name;
  int age; 
  iss>>name>>age;

  cout<< age<<"\n";
  cout<< name;
  */

  /*
  // ostringstream
  */

  ostringstream oss;

  oss <<"Mostafa ";
  oss <<50; 
  oss <<" years old \n";
  
  cout<< oss.str();


  return 0;
}