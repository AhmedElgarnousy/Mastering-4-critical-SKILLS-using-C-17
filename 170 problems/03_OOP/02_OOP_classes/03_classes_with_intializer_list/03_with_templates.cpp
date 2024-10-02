#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_fn_templated(T lst)
{
    for (auto item : lst)
    {
        cout << item << " ";
    }
    cout << "\n";
}

int main()
{
    // print_fn_templated( {1, 2, 3} );  // CE
    print_fn_templated<initializer_list<int>>({1, 2, 3});
    print_fn_templated<vector<int>>({1, 2, 3});

    return 0;
}