#include<iostream>
using namespace std;

class A{

  public:

  A(string name){
    cout<<"Hi from class" << name;
  }
};

class B : public A{

  public:
  B(string name, string name2):A(name){
    cout<<"Hi from class  B";
  }
};

int main()
{
  B ob1("ahmed", "kamal");


  return 0;
}