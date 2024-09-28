#include <iostream>
#include<stack>
using namespace std;

void print(stack<string> &s) {
  cout << "Stack elements: ";
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << "\n";
}


int main()
{
  stack<string> s;

  s.push("Elgarnousy");
  s.push("Kamal");
  s.push("Ahmed");
  
  stack<string>copy = s;

  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<"\n";
  print(copy);      // Ahmed Kamal Elgarnousy


  return 0;
}