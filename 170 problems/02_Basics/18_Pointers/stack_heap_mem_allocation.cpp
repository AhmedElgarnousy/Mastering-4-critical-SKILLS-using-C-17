#include <iostream>
#include <vector>
using namespace std;

/*
  int func2(int m, int n) {
  // The run-time stack
    int r = n + 2 * m;
    return r;
  }

  int func1(int a) {
    int x = 2 * a;
    int y = x * 1;

    int z = func2(x, y);

    return z;
  }
*/

/*
  // what is the potential problem ?

  void func1() {
    int arr[10000 * 10000];
  }
*/

/*
  // what is the potential problem ?
  int frecursive1() {
    return frecursive1();
  }

  int frecursive2(int n) {
    int arr[100] {1, 6, 7, 8};
    if(n < 0)
      return 1;
    return 1 + frecursive2(n-1);
  }
*/

// Heap: Dynamic allocation

int* fun(int n) {
  int* ptr1 = new int [n] {1, 3 ,5, 7, 9};
  int* ptr2 = new int [7] {1, 3 ,5, 7, 9, 10, 11};

  // ptr1 and ptr2: local vars in the stack
    // consecutive in memory

  // allocated data where ptr1/ptr2 points in the HEAP
    // ptr1 and ptr2 may not have sequential addresses

  delete[] ptr2;
  // the memory is "returned" to the heap to REUSE

  return ptr1;    // ok to return. not on stack. no destorying
}


int main() {
  // func1(5);
  // func1();
  // frecursive2(1000000);

  int* p = fun(10);
  delete[] p; // manage by yourself

  return 0;
}