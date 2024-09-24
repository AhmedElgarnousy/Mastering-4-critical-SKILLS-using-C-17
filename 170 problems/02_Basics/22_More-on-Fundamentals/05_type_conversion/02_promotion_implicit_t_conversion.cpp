#include <iostream>
#include <climits>
using namespace std;
// implicit aks: means automatic casting

int main()
{

    cout << 20 - 30 << "\n"; // int - int = good
    // no conversion: -ve = underflow
    unsigned int a = 20, b = 30;
    cout << a - b << "\n"; // 4294967286

    short x = 10;           // short converted here t int
    cout << x + 90 << "\n"; // 100

    // both x and 85 converted to double
    cout << x + 85 + 5.1 << "\n"; // 100.1

    // no conversion, overflow
    cout << 2000000000 + 2000000000 << "\n"; // -294967296
    // convert first 2000000000 to long long
    cout << 2000000000 + 2000000000LL << "\n"; // 4000000000
    auto z = 2000000000 + 2000000000L;         // LL

    long long d1 = LONG_LONG_MAX - 807; // 9223372036854775000
    double d2 = d1 - 0.0;               // 9223372036854774784
    double d3 = d1 - 100.0;             // 9223372036854774784

    // char or short values (signed or unsigned) are promoted to
    // int (or unsigned) before anything else happens
    char c = CHAR_MAX;     // 127
    cout << c + c << "\n"; // 254 / no overflow!

    return 0;
}
