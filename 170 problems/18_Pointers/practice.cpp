#include <iostream>
using namespace std;

void test() {
  // we have 1 pointer and 2 variables switch between between them 

  int val1 = 5, val2 = 10;
  int *ptr = &val1;

  // 5  5  0x61fde0    0x61fde8
  cout<<val1<< " "<< *ptr << " "<< &ptr<< " " << &val1<<"\n";

  ptr = &val2;
  //   5   10  0x61fde0  0x61fdec
  cout<<val2<< " "<< *ptr << " "<< &ptr<< " " << &val1;
  cout<<*ptr<<"point to no thing\n";
  ptr = nullptr;
  // if(!ptr)
  //   cout<<"NULL\n";

  cout<<"point to no thing\n";
  
}



void test1() { 
  // different addresses to the same buffer or location
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

void test3() {
  // pointer initialization
  double x = 10;
  double *ptr1 = &x;

  // double *ptr2 = NULL;   C-STYLE
  double *ptr2 = nullptr;  // prefered

  double* ptr3 = 0;

  // double* ptre= 1;  //CE: 0 or address

  double* ptr4;  // Garbage - DON'T
}
void test5() {
  // pointer with other types 
  double x = 10;
  double *ptr1 = &x;

  // double *ptr2 = NULL;   C-STYLE
  double *ptr2 = nullptr;  // prefered

  double* ptr3 = 0;

  // double* ptre= 1;  //CE: 0 or address

  double* ptr4;  // Garbage - DON'T
}

int main()
{
  // test();
  // test1();
  // test2();
  test3();
  return 0;
}