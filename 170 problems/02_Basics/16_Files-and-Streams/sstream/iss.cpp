#include <iostream>
#include<sstream>   // istringstream ostringstream

using namespace std;

int main()
{
  string str = "Ahmed 23 years";

  istringstream iss (str);
  ostringstream oss;

  string name, prefix, test;
  int age;

  iss>>name>>age>>prefix;

  oss<<"name: "<<name<<"\n";
  oss<<"age: "<<age<<"\n";
  oss<<"prefix: "<<prefix<<"\n";
  oss<<"test: "<<test<<"\n";
  return 0;
}