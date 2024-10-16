#include <iostream>
#include <vector>
#include <map>

using namespace std;

template <typename T>
void print(T lst)
{
    for (auto &item : lst)
        cout << item << " ";
    cout << "\n";
}

int main()
{
    vector<int> v1{5, 10};
    print(v1); // 5 10

    vector<int> v2(5, 10);
    print(v2); // 10 10 10 10 10

    multimap<int, int> map1; // before c++11
    map1.insert(pair<int, int>(1, 40));
    map1.insert(pair<int, int>(1, 50));

    multimap<int, int> map2{{1, 40}, {1, 50}, {1, 60}};
    auto range = map2.equal_range(1); // return pair of iterators(first ele,last ele)

    for (auto it = range.first; it != range.second; it++)
    {
        cout << it->first << " " << it->second << "\n";
        // 1 40         1 50
    }

    return 0;
}