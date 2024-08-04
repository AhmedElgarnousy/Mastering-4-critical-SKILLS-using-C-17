#include <iostream>
using namespace std;


template<typename Type> 

Type MyMax(Type a, Type b){
  if(a > b)
    return a;
  return b;

}

struct Employee {};

template <class Type1, class Type2>
Type1 sum(Type1 a , Type2 b) {
  Type1 r = a + b;
  return r;
}

int global_var = 0;
template<typename T>
void increment_me(T x) {
  static int i = 0;
  cout<<++i << " "<< ++global_var<<"\n";
  return;
}

template<class T>
T add(T a , T b) {
  return a + b;
}

template<class T>
T multiply(T a , int factor) {
  return a * factor;
}

template<>
string multiply(string str, int factor) {
  // we can't multiply strings 
  string res = "";

  while(factor --)
    res += str;
  return res;
}

int main(){

/*
    cout<<  MyMax(5.5, 2.0)<<"\n";           // 5: Guessed as int
    cout<<  MyMax<int>(5,2)<<"\n";      // 5
    cout<<  MyMax<double>(2.4, 5.4)<<"\n";   // 5.4
    cout<<  MyMax('A', 'X')<<"\n";   // X

    // cout<<  MyMax(2, 5.4)<<"\n";   // X
    cout<<  MyMax<int>(2, 5.4)<<"\n";   // 5
    cout<<  MyMax<double>(2, 5.4)<<"\n";   // 5.4
    cout<<  MyMax<double>(2, 5.4)<<"\n";   // 5.4

    Employee a, b;
    // cout<<  MyMax<Employee>(a, b)<<"\n";   // 5.4      // CE: can't compare
*/

/*
    cout<< sum(1, 10) << "\n";        // 11
    cout<< sum(1, 10.5) << "\n";      // 11
    cout<< sum(1.2, 10.5) << "\n";    // 11.7
    cout<< sum(1.2, 10) << "\n";      // 11.2
    cout<< sum<int , int>(1.2, 10) << "\n";   // 11
    cout<< sum('A', 1) << "\n";               // B
    cout<< sum(1, 'A') << "\n";               // 66

    // cout<< sum("I am ", "Ahmed") << "\n";     // CE: char *
    cout<< sum(string("I am "), string("Ahmed")) << "\n";     // CE: char *

*/
/*
      // one static variable for each generarted function
     increment_me(5);    // 1 1
     increment_me(5);    // 2 2
     increment_me(5);    // 3 3
     // new function
     increment_me(2.4);  // 1 4
     increment_me(2.4);  // 2 5
     increment_me(2.4);  // 3 6
     // anew function
     increment_me('A');  // 1 7
     increment_me('A');  // 2 8
     increment_me('A');  // 3 9
     increment_me('a');  // 4 10
     increment_me('a');  // 5 11
     increment_me('a');  // 6 12
*/

/*
*/
//  what if a specific data type should be handled differebtly

    string s = "Magic";
    cout<< add(10, 4)<< "\n";     // 14
    cout<< add(s, s)<< "\n";     // MagicMagic

    cout<< multiply(10, 4)<< "\n";     // 40
    cout<< multiply(s, 4)<< "\n";     // MagicMagicMagicMagic



}