#include <iostream>

using namespace std;

int main()
{
    double zero{0.0};

    double posinf{5.0 / zero}; // positive infinity
    cout << posinf << '\n';    // inf

    double neginf{-5.0 / zero}; // negative infinity
    cout << neginf << '\n';     // -inf

    double nan{zero / zero}; // not a number (mathematically invalid)
    cout << nan << '\n';     // -nan

    if (nan == nan)
        cout << "Won't be printed!\n";

    return 0;
}
