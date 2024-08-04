#include<iostream>
#include<vector>
using namespace std;


/*Pass pointer by reference*/
void do_math(int &x) {
  // guatantee this function
  // never called with null

  x = x + 1;
  x = x * 2;     // multiply with 2
  x *= 2;       // multiply with 2
}

void do_math(int *x) {
  if( x == nullptr )
    return ;

  *x = *x + 1;
  *x = *x * 2;     // multiply with 2
  *x *= 2;       // multiply with 2
}

void print(vector<int> *ptr) {

  for(auto v: *ptr)
    cout<<v<<" ";
}

void test1() {
  int x1 = 4;

  do_math(x1);
  cout<< x1 << "\n";  // 20


  x1 = 4;
  do_math(&x1);
  cout<< x1 << "\n";  // 20


  vector<int> v {5, 7, 8};
  print(&v);

}


/* Return pointer */

int* max(int *p1, int *p2) {
  if(p1 == nullptr)   return p2;
  if(p2 == nullptr)   return p1;
  if(*p1 > *p2)
    return p1;
  return p2;
}

int* some() {
  int temp = 10;
  // NEVER. local variale will destroyed
  return &temp;
}


void test2() {

  int x = 1, y = 5;
  int *p = max(&x, &y);
  cout<< *p <<"\n";
}



/* pass pointer to reference */
void hello(int &x) {

}

void test3() {
  int x = 1;
  int *p = &x;
  int &y1 = x;

  //int& needs a variable on the right side
  int &y2 = *p;

  hello(x);
  hello(y2);
  hello(*p);
}


// Refernece VS Pointer
void func1(int &x) {}
void func2(const int &x) {}  // this implies that the x will be const
void func3(int *x) {}

void test4(){
  int x = 10;
  int *ptr = &x;

  func1(x);
  // func1(ptr);
  func1(*ptr);
  // func1(10);

  func2(x);
  // func2(ptr);
  func2(*ptr);
  func2(10);

  // func3(x);
  func3(&x);
  func3(ptr);
  // func3(10);
}

int main() {

  // test1();
  // test2();
  // test3();
  test4();

  return 0;
}