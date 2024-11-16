#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void Read2Numbers(int &x, int &y)
{
    while (true)
    {
        string line; // assume input per line
        getline(cin, line);

        istringstream iss(line);
        iss >> x >> y;

        if (iss.fail())
            cout << "Something wrong in input. Try again: ";
        else
            break;
    }
}

int main()
{
    int a, b;
    Read2Numbers(a, b);
    cout << a << " " << b;
    return 0;
}
