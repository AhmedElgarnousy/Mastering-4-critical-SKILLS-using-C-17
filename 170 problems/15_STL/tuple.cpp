#include<iostream>
#include<tuple>

using namespace std;


int main(){

  tuple<char, int, string> t1;
  t1 = make_tuple('c', 10, "ahmed");

  // Get<position> c, 10
  cout<< get < 0 > (t1)  << " " << get < 1 > (t1) << "\n";

  // Set<position>
  char ch;
  char val;
  string name;

  // tie unpack the tuple values into separate variables
  tie(ch, val, name) = t1;
  cout<<name<<"\n";

  // concatenating 2 tuples to return a new tuple  (rarely used)
  auto t2 = tuple_cat(t1, make_tuple(10.6));

  // c++17 some nicer sytnax. Don't try unless c++17 compilation
  int c, d;

  // auto [c, d] = std::make_tuple(4, 5);


  return 0;
}
