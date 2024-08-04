#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void test1() {
   vector<int> v1; // Array thta can be expanded

    v1.push_back(30); 
    v1.push_back(10); 
    v1.push_back(20);

    for(int i = 0; i < (int)v1.size(); i++) {
        cout<< v1[i] << " ";     // 30 10 20
    }
    cout<<"\n";

    vector<int> v2(5, 7);
    // Like an array with 5 numbers all initialized with 7

    v2.push_back(13); // now add extra num = 13

    for(auto &val : v2) {
      cout<< val<< " ";
    }
    cout<<"\n";
    
    vector<int> vec ;

  // v2.at(1000); exception
  // Later: emplace_back

}

void test2() {
   vector<int> vec {3, -4, 7, -2, -1, 3, -5, 10, 3};

    // let's remove negative values 
    for(auto it = vec.begin(); it != vec.end(); ) {
        if(*it < 0)
        {
          // You must use the returned iterators as erase invalidates it
          // working on some cases != working all cases/data strutures
          it = vec.erase(it);
          // It points to next element. Don't increment it
        }
        else
            ++it;  // update ONLY if not removed 
    }
    // 3 7 3 10 3
    for(auto &val : vec)
      cout<< val << " ";
}

void test3() {
  vector<int> v {3, -4, 7, -2, -1, 3, -5, 10, 3};

  // find is an algorithm. see algorithms video
  auto it = find(v.begin(), v.end(), -2);

  if(it != v.end()) {
      vector<int> v2 {8, 9 , 10};
      v.insert(it, v2.begin() , v2.end());
  }
  // 3 -4 7 8 9 10 -2 -1 3 -5 10 3
  for(auto &val : v)
    cout<< val << " ";
}

int main() {


  //  test1();
  // test2();
   test3();
  return 0;
}