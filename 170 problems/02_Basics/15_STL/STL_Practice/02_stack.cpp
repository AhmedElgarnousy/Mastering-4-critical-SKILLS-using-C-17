#include<iostream>
#include<stack>
#include<vector>

using namespace std;


void print_stack(stack<int> &s) {
   cout << "Stack elements: ";
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << "\n";

  // for(int i = st.top(); i ){}
}

int sum_vector(vector<int> vec)
{
  int sum = 0;
  while(!vec.empty()){
    sum += vec.back();
    vec.pop_back();
  }
  return sum;
}

int max_3stack_sum (vector<int> a ,vector<int> b , vector<int> c) {

  int sa = sum_vector(a), sb = sum_vector(b), sc = sum_vector(c);

  while(!(sa == sb && sb == sc))
  { 
    sa = sum_vector(a), sb = sum_vector(b), sc = sum_vector(c);
    cout<< sa<<" "<<sb<<" "<<sc<<"\n";
    
    if(sa == sb && sa != sc){
      if(sa > sc)
        a.pop_back(), b.pop_back();
      else
        c.pop_back();
    }

    else if(sa == sc && sa != sb){
        if(sa > sb)
          a.pop_back(), c.pop_back();
      else
          b.pop_back();
      }

    else if(sb == sc && sb != sa)
    {
      if(sa > sc)
          c.pop_back(), b.pop_back();
      else
        b.pop_back();
    }
      
    else if(sa < sb && sb < sc)
      b.pop_back(), c.pop_back();
    
    else if(sc < sb && sc < sa)
      a.pop_back(), b.pop_back();
    
    else if(sb < sa && sb < sc)
      b.pop_back(), c.pop_back();
  }
  return sa;
}

int main()
{ 
   vector<int> a {1,2,3,4};
   vector<int> b {2,2,2,4,0};
   vector<int> c {0,3,3,5};

  //vector<int> a {1,2,3,4};
  //vector<int> b {2,2,2,4,0};
  //vector<int> c {12,3,3,5};

  //vector<int> a {0,2,1,1,0};
  //vector<int> b {0,1,1,2,12};
  //vector<int> c {1,1,2,0};

  int sum =  max_3stack_sum(a, b, c);
  cout<<sum<<"\n";
  return 0;
}