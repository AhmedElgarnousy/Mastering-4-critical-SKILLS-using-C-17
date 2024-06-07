#include <iostream>
#include <unordered_set>
#include <set>
#include <algorithm>  // find
using namespace std;


int main()
{

    unordered_set<int> s1 {20, 10, 20, 5, 30};

    s1.insert(7);
    s1.insert(0);

    for (auto v : s1)
        cout<< v << " ";
    cout<<"\n";  // 0 7 20 10 5 30 : removed duplicates

    // if container has amethod use it 
    //      as it considers the internal representation

    auto it1 = s1.find(20);  // FAST
    cout << *it1 << "\n";
    // *it = 20;         // CAN'T change

    // generic algorithms iterate in gereric/same way
    //   no idea about internals representation

    auto it2 = find(s1.begin(), s1.end(), 20);   // SLOW
    cout<< *it2 << "\n";

    cout << s1.size() << "\n";  // 6
    s1.erase(s1.begin());
    cout<< s1.size()<< "\n";   // 5


    return 0;
}
