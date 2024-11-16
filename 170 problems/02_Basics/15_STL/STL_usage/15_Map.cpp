#include <iostream>
#include <map>
#include <vector>
#include <utility>

using namespace std;

void print(map<string, int> &mp)
{
    // you can use auto
    // you can iterate on map and set normally like vectors
    for (const pair<string, int> &item : mp) // const with &
    {
        cout << item.first << "-" << item.second << " | ";
    }
    cout << "\n";
}

void more()
{
    map<char, vector<int>> my_data;
    vector<int> x;

    x.push_back(1);
    x.push_back(2);
    x.push_back(3);

    my_data['A'] = x;

    x.push_back(4);
    // my_data['A'].push_back(4);

    cout << my_data['A'].size() << "\n"; // 3
    cout << x.size() << "\n";            // 4  (because 2 copies)

    vector<int> x2 = my_data['A'];  // 3th copy
    vector<int> &x3 = my_data['A']; // same memory

    my_data['A'] = x3;
    x3.push_back(4);
    x3.push_back(5);
    cout << my_data['A'].size() << "\n"; // 5 (they have same memory)
}
int main()
{
    more();
    /*
    map<string, int> mp;
    mp["mostafa"] = 10;
    mp["ahmed"] = 20;
    mp["ali"] = 20;

    print(mp);

    auto it = mp.find("ahmed");
    if(it != mp.end())
    {
        mp.erase(it);
    }

    print(mp);
    */

    return 0;
}