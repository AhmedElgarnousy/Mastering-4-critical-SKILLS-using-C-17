#include<iostream>
#include<stack>
#include<vector>

using namespace std;

/*****************************************************
      ** Practice: Maximum Sum from 3 Stacks **
*****************************************************/

void print_stack(stack<int> &s) {
   cout << "Stack elements: ";
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << "\n";

  // for(int i = st.top(); i ){}
}

int max_3stack_sum (vector<int> &a ,vector<int> &b , vector<int> &c) {
  
  stack<int> stack1  ;  // sum 10 {1,2,3,4}
  stack<int> stack2 ;  // sum 10   {2,2,2,4,0}
  stack<int> stack3 ;  // sum 11 {0,3,3,4,5}

  int sum_a {0}, sum_b {0}, sum_c {0};
  int equalSum;


  for(int i = 0; i < a.size(); i++) {
    stack1.push(a[i]);  
    sum_a += a[i];
  }

  for(int i = 0; i < b.size(); i++) {
    stack2.push(b[i]);
    sum_b += b[i];
  }

  for(int i = 0; i < c.size(); ++i) {
    stack3.push(c[i]);
    sum_c += c[i];
  }

  
  while(1 )
  {
    cout<< "hey";
    if(sum_a < sum_b) {
      sum_b -= stack2.top();
      stack2.pop();
    }
    if(sum_a > sum_b){
      sum_b -= stack1.top();
      stack1.pop();
    }

    if(sum_b < sum_c ) {
      sum_c -= stack3.top();
      stack3.pop();
    }
    if(sum_b > sum_c) {
        sum_b -= stack2.top();
      stack2.pop();
    }


    if(sum_a  == sum_b && sum_b == sum_c) {
      equalSum = sum_c;
      cout<<"req sum: "<<equalSum <<" \n";
      return equalSum;
    }

  }

}


int main() {

  vector<int> a {1,2,3,4};
  vector<int> b {2,2,2,4,0};
  vector<int> c {0,3,4,5};

  int reqSum = max_3stack_sum(a, b, c);


  return 0;
}