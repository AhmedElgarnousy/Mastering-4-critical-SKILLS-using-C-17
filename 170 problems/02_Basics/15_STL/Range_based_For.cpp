#include<iostream>
#include<deque>
#include<queue>

using namespace std;

// auto keyword: automatically know the type

int main() {
    // c++ 11 Iterating Style

    // iterate on arr
    int arr[] {1,2,3};

    for(auto val : arr)  // copy not reference
      cout<< val << " ";
    cout<<"\n";

    // iterate on deque of int
    deque<int> q {1,2,3,4,5};
    for(const auto &val : q)   // most perfered way to iterate with reference less time
      cout<< val << " ";
    cout<<"\n";

    for(auto val : {1,2,3,4,5})
      cout<< val << " "; 
    cout<<"\n";

    // iterate on string
  string name = "hello";
    for(auto val : name){
      cout<< val << " ";
    }
    cout<<"\n";

    cout<<name<<"\n";
  return 0;
}