#include <iostream>
#include<queue>
#include<stack>
using namespace std;


struct last_k_numbers_sum_stream {
  int k;
  queue<int> queueOfNums;
  int sum = 0;
 
  last_k_numbers_sum_stream(int _k) {
    k = _k;
  }
  int next (int new_sum) {
    // compute and return sum of last k numbers sent so far
    queueOfNums.push(new_sum);
    sum += new_sum;
    if( queueOfNums.size() > k)
    {
      sum -= queueOfNums.front();
      queueOfNums.pop();
    }
    return sum;
  }
};


int main()
{
  last_k_numbers_sum_stream processor(4);
  
  int num;
  while(cin>>num)
    cout<< processor.next(num)<< "\n"; 
  

  return 0;
}