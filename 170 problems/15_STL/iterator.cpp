#include<iostream>
#include<deque>
#include<queue>

using namespace std;


void print_front(deque<int> &q) {
  cout << "Queue elements (front): ";
  deque<int>::iterator it  = q.begin();
  while(it != q.end()) {
      cout<<*it<<" ";
      it ++;
  } 
  cout<<"\n";
}

void print_back1(deque<int> &q) {
  cout << "Queue elements (back): ";

  deque<int>::reverse_iterator rit  = q.rbegin();
  while(rit != q.rend()) {
      cout<<*rit<<" ";
      rit ++;
  } 
  cout<<"\n";
}

void print_back2(deque<int> &q) {
    cout << "Queue elements (back): ";

    for(auto it = q.rbegin(); it != q.rend() ; it ++ )
      cout<<*it<<" "; 
    
    cout<<"\n";
}

// Iterator Arithmetic

void lets_play() {
  deque<int> q {1,2,3,4,5};

  auto it = q.begin() + 3;  // Forth element position
  cout << *it << "\n";      // 4

  cout << *(it --) << "\n";  // 4 then move to 3rd position 
  cout << *it << "\n";       // 3

  cout << *(-- it) << "\n";   //2
  cout << *it << "\n";        // now on 2nd 

  cout << *(it + 3) << "\n";   // 5th position
  it += 3;
  cout << *it << "\n";        // 2 now on 5th position

  // reset all to 10
  for(auto it = q.begin(); it != q.end(); ++it) {
    *it = 10;
  }
}

void print_front_const (deque<int> &q) {
  cout << "Queue elements (front): ";

  deque<int>::const_iterator it = q.cbegin();
  while(it != q.cend()) {
    cout << *it << " ";
    // *it = 10;     // can't - CONST
    ++it;
  }

  cout << "\n";
}

int cout_lowers(const string & str) {
  int cnt = 0;
  for(auto it = str.begin(); it != str.end(); ++it) {
    char ch = *it;
    cout<<ch;
    cnt += (islower(ch) > 0);
  }
  return cnt;
}


int main() {

  // deque<int> q {1,2,3,4,5};
    // print_front(q);
    // print_back1(q);
    // print_back2(q);
    // print_front_const(q);
    // lets_play();

    // string name = "Ahmed";
    // int count = cout_lowers(name);
     cout_lowers("name");
     
  return 0;
}