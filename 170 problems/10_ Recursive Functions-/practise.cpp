#include <iostream>
using namespace std;

int factorial(int n) {
  cout<< "function call: Factorial:n="<<n<<"\n";
  
  if(n == 1)
    return 1;
  return factorial(n-1) * n;
}

void print_triangle(int levels){
  if(levels == 0)
    return;
  for (int i = 0; i < levels; ++i )
    cout<< "*";
  cout<<"\n";

  print_triangle(levels - 1);
}

void print_triangle2(int levels){
  if(levels == 0)
    return;

  print_triangle2(levels - 1);
  
  for (int i = 0; i < levels; ++i )
    cout<< "*";
  cout<<"\n";

}

int main()
{
  // cout<<factorial(6)<<"\n";
  // print_triangle(5);
  print_triangle2(5);

  return 0;
}