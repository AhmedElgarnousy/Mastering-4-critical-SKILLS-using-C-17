#include <iostream>
#include <utility> // for pair
#include <stack>
#include <algorithm> // for sort

using namespace std;

int main()
{

  pair<int, string> p = make_pair(10, "saad");
  cout << p.first << " " << p.second << "\n";
  cout << "***********\n";

  pair<int, string> p1 = make_pair(10, "ismail");
  pair<int, string> p2 = make_pair(11, "mostafa");
  cout << p1.first << " " << p1.second << "\n";
  cout << p2.first << " " << p2.second << "\n";

  cout << "***********\n";

  // stack of pairs
  stack<pair<int, string>> s;
  s.push(p1);
  s.push(p2);

  while (!s.empty())
  {
    cout << s.top().first << " " << s.top().second << "\n";
    s.pop();
  }
  cout << "***********\n";

  // sort(s, s + (int)s.size(), );

  // pair of pair
  pair<int, pair<int, string>> my_p = make_pair(10, make_pair(20, "ali"));
  my_p = make_pair(18, p1);
  cout << my_p.second.first << " " << my_p.second.second << "\n";
  cout << "***********\n";

  return 0;
}