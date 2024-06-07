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

void print_c(priority_queue <char> &pq) {
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
    pq.push(5);  // 5 3
    pq.push(1);  // 5 3 1
    pq.push(7);  // 7 5 3 1
    pq.push(0);  // 7 5 3 1 0
 

    print(pq);
    // use -ve number to sort small to large

    priority_queue<char> pq_char;
    pq_char.push('b');  // b
    pq_char.push('d');  // d b
    pq_char.push('a');  // d b a
    pq_char.push('c');  // d c b a

    print_c(pq_char);

  return 0;
}