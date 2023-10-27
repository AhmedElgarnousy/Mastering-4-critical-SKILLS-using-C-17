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
  s.push("Elgarnous");
  s.push("Kamal");
  s.push("Ahmed");

  print(s);      // Ahmed Kamal Elgarnousy


  return 0;
}