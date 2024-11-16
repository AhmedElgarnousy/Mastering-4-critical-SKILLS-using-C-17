#include <iostream>
using namespace std;

// flush is a slow operation
int main()
{
    // cout << "something" << endl;
    // cout << "something" <<endl<<flush;

    char x = 7;
    cerr << x << "\n"; // NEVER print something

    char x_char = '7';
    char x_num = 7u;

    // cout << static_cast<int>(7u) << endl
    cout << static_cast<int>(x_num) << endl;
    cout << x_char << endl
         << flush;

    return 0;
}