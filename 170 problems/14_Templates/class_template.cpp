#include <iostream>
using namespace std;


template<typename T, int size>
struct MyQueue {
  T arr[size];
  int pos;

  MyQueue () {
    pos = 0;
  }
  MyQueue (T para_arr[], int len) {
    for(int i = 0; i < len; i ++) {
      arr[i] = para_arr[i];
    }
    pos = len;
  }

  void add_front(T elem) {
    arr[pos++] = elem;
  }

  template<typename Type>
  void sum_and_add (Type a , Type b) {
    arr[pos++] = a + b;
  }

  void print() {
    for(int i = 0 ; i < pos; ++i) 
      cout<< arr[i] << " ";
    cout<< "\n";
  }
};



int main( ) { 

    MyQueue<string, 12>q_str;
    q_str.add_front("Ahmed");
    q_str.add_front("Kamal");
    q_str.print();


    MyQueue<int, 15>q_dob;
    q_dob.add_front(2);
    q_dob.add_front(3);
    q_dob.sum_and_add<double>(2.5, 3.9);
    q_dob.print();

return 0;
}