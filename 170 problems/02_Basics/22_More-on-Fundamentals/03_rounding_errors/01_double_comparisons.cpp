#include <iostream>

using namespace std;

int main()
{
    double a = 3.0 / 7.0;
    double b = 1 + 3.0 / 7.0 - 1;

    // Suprise sometimes not 1
    cout << a << " " << b << " " << (a == b) << "\n";

    a = 5.0, b = 4.999999999999999999;
    // Suprise sometimes not 0
    cout << a << " " << b << " " << (a == b) << "\n";

    /*NEVER Compare doubles for equality directly*/

    return 0;
}