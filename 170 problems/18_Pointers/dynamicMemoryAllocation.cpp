#include<iostream>

using namespace std;

void test1() {
  // creating a single element
  int x = 10;
  int *p0 = &x;
  int *p1 = nullptr;

  int *p2 = new int;    // Dynamic allocation
  *p2 = 20;

  cout<< *p2<<" "<<p2<<" "<<&p2<<"\n";

  int *p3 = new int {30}; // c++11 brace initialization syntax
  // int *p3 = new int {30};   // initializer

  // p0 points to x. never delete
  // p1 is nullptr. never delete

  cout<<*p2<<" "<<*p3<<"\n";

  // we created these 2 dynamically. Delete them
  delete p2;
  delete p3;
  p2 = p3 = nullptr;
}

void test2() {
  // creating more than element 
  const int SIZE  = 10;
  int arr[SIZE] {0};

  int n = 20; // NOT const
  int *pArr = new int [n];

  for(int i = 0; i < n; i++)
    pArr[i] = i;

  cout<<pArr[0]<<"\n";

  delete[] pArr; // free the array
  cout<<pArr[0];

  // WRONG and will compile 
  // delete pArr

}


int main() {
  // test1();
  test2();


  return 0;
}