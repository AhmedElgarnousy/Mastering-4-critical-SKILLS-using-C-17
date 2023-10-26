#include <iostream>
#include<queue>
#include<stack>
using namespace std;


struct last_k_numbers_sum_stream {
  int k;
  int sum = 0;
  queue<int> q;

  last_k_numbers_sum_stream(int _k) {
    k = _k;
  }
  int next (int new_sum) {
    // compute and return sum of last k numbers sent so far
   sum += new_sum;

   if( (int)q.size() >  k){
    sum -= q.front();
    q.pop();   // don't keep with unneedded numbers in your queue
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