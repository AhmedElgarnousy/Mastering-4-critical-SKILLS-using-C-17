#include <iostream>
#include <map>
#include <vector>

using namespace std;

void print(map<string, int> &mp)
{
    // for (pair<string, int> item : mp)
    // for (const pair<string, int> &item : mp)
    for (auto &item : mp)
        cout << item.first << " " << item.second << "\n";
    cout << "\n";
}

int main()
{
    map<char, vector<int>> my_data;

    vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);

    my_data['A'] = x;
    x.push_back(4);

    cout << my_data['A'].size() << "\n"; // 3
    cout << x.size() << "\n";            // 4  (2copies)

    vector<int> x2 = my_data['A'];  // 3rd copy
    vector<int> &x3 = my_data['A']; // same memory

    return 0;
}