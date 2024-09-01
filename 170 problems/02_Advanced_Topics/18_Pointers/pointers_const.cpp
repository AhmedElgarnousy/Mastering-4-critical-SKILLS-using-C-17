#include<iostream>

using namespace std;

  // pointers to constant

void test1() {
  int val1 = 20;
  int val2 = 30;

  // The data  type is const int, so pointer must be const int*
  const int val3 = 40;

  // 1) pointers to constant
  const int * ptr1 = &val1;
  // *ptr = 20;  Can't change data it points to

  // But can change pointer value itself
  // Notice also val3 is const int

  ptr1 = &val3;

}
void test2() {
  int val1 = 20;
  int val2 = 30;

  // The data  type is const int, so pointer must be const int*
  const int val3 = 40;

  // 2) constant pointers
  int * const ptr2 = &val2;
  *ptr2 = 11;           // ok

  // ptr2 = &val2; // No pointer itself is const int*
  // int * const ptr3 = &val3;
}

void test3() {
  int val1 = 20;
  int val2 = 30;

  // The data  type is const int, so pointer must be const int*
  const int val3 = 40;

  // 3) constant pointers to const
  const int * const ptr4 = &val1;
  // *ptr4 = 10;   // Can't change data it points to
  // ptr4 = &val3; //  Can't change pointer value
}


int main() {



  return 0;
}