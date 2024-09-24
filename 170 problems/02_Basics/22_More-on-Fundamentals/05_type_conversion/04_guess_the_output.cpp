#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    cout << v.size() << "\n"; // 0
    // typically resturn size_t is unsigned (int or long long)
    // -1 wrap around a huge number
    cout << v.size() - 1 << "\n"; // 18446744073709551615

    // never print
    for (int i = 0; i < (int)v.size() - 1; ++i)
        cout << "#\n";

    // infinity
    for (int i = 0; i < (int)v.size() - 1; ++i)
        cout << "*\n";
    return 0;
}