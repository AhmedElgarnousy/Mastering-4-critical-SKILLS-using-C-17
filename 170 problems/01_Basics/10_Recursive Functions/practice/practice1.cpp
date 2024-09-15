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



int main()
{
  cout<<factorial(6)<<"\n";
  print_triangle(5);


  return 0;
}