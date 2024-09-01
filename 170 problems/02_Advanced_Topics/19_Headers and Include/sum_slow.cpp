#include <iostream>
#include "sum.hpp"
using namespace std;


// INitialize the extern variable
int total_calls = 0;

int sum_1_n(int n) {
  ++total_calls;

  cout<<"Total_calls "<<
        total_calls<<"\n";

  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += i;
  }
  return sum;
}