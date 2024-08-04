#include <iostream>
#include <vector>
using namespace std;


struct Emplyee {
  int *xPtr = nullptr;
  Emplyee() {
    xPtr = new int[5] {1 ,2 ,3 ,4 ,5};
  }
  ~Emplyee() { // destructor
    cout<<"Bye\n";
    delete[] xPtr;
    xPtr = nullptr;
  }
  void print() {
    cout<< *xPtr <<" "<<xPtr<<" "<<&xPtr<<"\n";
  }

  // For now: Add these  2 lines when you have internal pointers
  // They will inform you about soon problems
  // Later in OOP: Full understanding and proper treatment
  Emplyee(const Emplyee& e) = delete;
  void operator = (const Emplyee& e) = delete;
};

int main() {
/*
  // struct memory leak
  int *x = new int {10};
  delete x;
  //I created and deleted 

  // But this struct creates internally who deletes!
  Emplyee e; // memory leak! because the Emplyee creats array and no one delete it.
  e.print();
*/

/*
  // Memory Leak / Dangling Pointer
  Emplyee e1, e2;
  e1.xPtr[0] = 20;

  // 20 0x91c 0x7fff
  e1.print();
  // 1 0xaaa 0xbb
  e2.print();

  // now CE will saves us from our mistakes 
  e2 = e1;

  // Crash!
  // e2 lost its xPtr value of the created memory
  // the value of e1 copied

  // problem 1): memory leak as we lost e2 created memory
  // problem 2): e1 ptr will be deleted twice = dangling = crash

  Emplyee e3 = e1;  // same issue but more implicit
*/


  return 0;
}