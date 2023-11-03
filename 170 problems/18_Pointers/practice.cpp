#include <iostream>
using namespace std;

void test1() {
   int age = 55;
  cout<< age << " " << &age<<"\n";
  
  int &ref1 = age;
  cout<< ref1 << " " << &ref1 <<"\n";


  int &ref2 = ref1;
  cout<< ref2 << " " << &ref2 <<"\n";


  ref1 = 10;

  // all variable s pointing to same memory change
  cout<< age << " " << ref1 << " "<< ref2<<"\n";
}
void test2() {
  int age = 55;
  int &ref = age;
  int another = 3;

  // can't re-assign it to a new address
  // ref = &another;     Wrong

  // Must be initialized to a declared variable
  // int &ref2 ;        WRONG
  // int &ref2 = 3;        WRONG

  // MUST be of the same type
  double val = 10;
  // int &ref3 = val; 

}



int main()
{
   test1();
   test2();
  return 0;
}