#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // 3 floating point data types
    double x{10.0};       // default
    float y{20.f};        // NEVER use (!accurate), unless good reason
    long double z{22.4L}; // Typically not needed

    cout << fixed;
    cout << setprecision(19);

    cout << 3.33333333333333333333333333333333333333f << '\n'; // float
    cout << 3.33333333333333333333333333333333333333 << '\n';  // double
    cout << 3.33333333333333333333333333333333333333L << '\n'; // long double

    // 3.3333332538604736328 for float
    // 3.3333333333333334814 for double
    // 3.3333333333333333333 for long double
    // Observe: 1) NOT equal. 2) float is less accurate

    float f1{2147483648.0f}; // f has 11 significant digits
    cout << f1 << "\n";      // 2147483648.0000000000000000000

    float f2{123456789.0f}; // f has 10 significant digits
    cout << f2 << "\n";     // 123456792.0000000000000000000

    double d{123456789.0}; // d has 10 significant digits
    cout << d << "\n";     // 123456789.0000000000000000000

    return 0;
}
