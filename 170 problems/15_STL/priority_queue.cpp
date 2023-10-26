#include <iostream>
#include<queue>
using namespace std;

void print(priority_queue <int> &pq) {
  cout << "priority Queue elements: ";
  while(!pq.empty()) {
    cout<< pq.top() << " ";
    pq.pop();
  }
  cout << "\n";

}

int main()
{
    // order from big to small 
    priority_queue<int> pq;
    pq.push(3);  // 3
    pq.push(5);  // 3
    pq.push(1);  // 3
    pq.push(7);  // 3
    pq.push(0);  // 3


    print(pq);
    // use -ve number to sort small to large

  return 0;
}