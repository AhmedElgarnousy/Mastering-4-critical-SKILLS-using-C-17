#include <iostream>   // cout
#include "sum.hpp"  // sum_1_

using namespace std;


int main() {

  for(int i = 0; i < 3; i++) {
    sum_1_n(10);
  }
  
  total_calls += 100;

  for(int i = 0; i < 3; i++) {
    sum_1_n(10);
  }

  return 0; 
}