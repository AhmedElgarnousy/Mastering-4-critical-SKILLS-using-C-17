#include<iostream>
#include<deque>
#include<queue>

using namespace std;



int main() {
    // c++ 11 Iterating Style
    int arr[] {1,2,3};

    for(auto val : arr)
      cout<< val << " ";
    cout<<"\n";

    deque<int> q {1,2,3,4,5};
    for(const auto &val : q)
      cout<< val << " ";
    cout<<"\n";

    for(auto val : {1,2,3,4,5})
      cout<< val << " ";
    cout<<"\n";

    for(auto val : "hello")
      cout<< val << " ";
    cout<<"\n";

  return 0;
}