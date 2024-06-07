#include<iostream>

using namespace std;

void test() {
  int arr [] {3,5,7,9};

  //value of array is address: to first element
  cout<< arr << "\n";  // 0x61fde0

  int &val  = arr[0];
  cout<< val << " " << &val << "\n"; // 3  0x61fde0
  cout<< &arr[0] << "\n";    // 0x61fde0

  int *ptr = arr;
  // also value of ptr is address
  // 3 0x61fde0   0x61fdc8
  cout<< *ptr << " " << ptr << " " << &ptr <<"\n"; // 3  0x61fde0

  // pointer to array: you can use it as same as arary
  ptr[0] = 10, ptr[1]  = 20;

  for(auto &val : arr)
    cout<< val;          //  10 20 7 9
  cout<< "\n";          //  10 20 7  9

}
void test1() {
  // offset notation
  int arr[]  {3, 5 , 7, 9};
  int *ptr = arr;

  cout<<ptr + 0<<" "<< &arr[0]<<"\n";
  cout<<ptr + 1<<" "<< &arr[1]<<"\n";
  cout<<ptr + 2<<" "<< &arr[2]<<"\n";

  cout<<*(ptr + 0) << " " << arr[0] << "\n";
  cout<<*(ptr + 1) << " " << arr[1] << "\n";
  cout<<*(ptr + 2) << " " << arr[2] << "\n";
  cout<<*(ptr + 2) << " " << *(arr + 2) << "\n";

  // arr[index] = subscript notation
  // * (ptr + 2)= offset  notation
  // *ptr + 3  =  3 + 3 = 6 - get the value of current cell and increment 3
  // *(ptr + 3)  =  9 move to extra 3 cells then get value

  cout<<*(ptr + 3) << " " << *ptr + 3 << "\n";
}

void test2() {
  // pointer arithmetic

  int arr[]  {3, 5 , 7, 9};
  int *ptr = arr;
  cout<< *ptr <<"\n";  // 7

  ++ptr;
  cout<< *ptr <<" "<< arr[1]<<"\n";  // 5
  cout<<*ptr++<<"\n"; // 5
  cout<< *ptr <<"\n";  // 7

  cout<< *++ptr <<"\n"; //9
  cout<< *ptr <<"\n";  // 9

  cout<< *--ptr <<"\n"; //7
  cout<< *ptr <<"\n";  // 7

  ptr -=2;   // got back 2 poistions
  cout<< *ptr <<"\n";  // 3

  --ptr; // now this is 1step before array. BE Carefull
  // ++arr;  CE

  ptr = arr + 3;
  cout << ptr - arr << "\n";    // 3 cells

  ptr = arr;
  cout << ++*ptr << "\n";   // 4 
  cout << ptr - arr << "\n";    // 0 cell = still same location
}

void test3() {
  // iterating over array
  int arr[]  {3, 5 , 7, 9};
  int *ptr = arr;


  while(ptr != arr + 4)
    cout<< *ptr++ << " ";
  cout<<"\n"; 

  ptr = arr;
  while(ptr != arr + 5)
    cout<< *ptr++ << " ";
  cout<<"\n"; 
}

void test4() {
  // iterating over char array
  char name[] = "Ahmed";
  char * ptr = name;

  while(*ptr != '\0')
    cout<<*ptr++;
  cout<<"\n";
}

void test5() {
  // compare pointers

  string name1 = "ahmed";
  string name2 = "ahmed";

  cout<< (name1 == name2) << "\n";

  string * ptr1 = &name1;
  string * ptr2 { &name2 }; // c++ style

  cout<< (ptr1 == ptr2) << "\n";
  cout<< (*ptr1 == *ptr2) << "\n";
}

int main() {

  // test();
  // test1();
  // test2();
  // test3();
  // test4();
  test5();

  return 0;
}