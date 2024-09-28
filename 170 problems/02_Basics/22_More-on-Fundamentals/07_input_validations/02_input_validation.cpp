#include <iostream>

using namespace std;

void Read2Numbers(int &x, int &y)
{
    while (true)
    {
        cin >> x >> y;
        if (cin.fail())
        {
            cout << "something wrong in input. Try again: ";
            cin.clear(); // refresh
            cin.ignore(2, '\n');
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int a, b;
    Read2Numbers(a, b);
    cout << a << " " << b;

    return 0;
}