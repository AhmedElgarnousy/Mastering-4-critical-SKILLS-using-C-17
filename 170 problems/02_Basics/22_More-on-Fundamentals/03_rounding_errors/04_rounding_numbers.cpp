#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c = 3.14159;              // pi
    cout << setprecision(5) << "\n"; // 3.14159
    cout << setprecision(9) << "\n"; // 3.14159
    cout << fixed;                   // use it always with setprecision
    cout << setprecision(5) << "\n"; // 3.14159
    cout << setprecision(9) << "\n"; // 3.141590000

    // Rounding
    cout << setprecision(7) << 1.21658 << "\n"; // 1.2165800
    cout << setprecision(6) << 1.21658 << "\n"; // 1.216580
    cout << setprecision(5) << 1.21658 << "\n"; // 1.21658
    cout << setprecision(4) << 1.21658 << "\n"; // 1.2165
    cout << setprecision(3) << 1.21658 << "\n"; // 1.216
    cout << setprecision(2) << 1.21658 << "\n"; // 1.21
    cout << setprecision(1) << 1.21658 << "\n"; // 1.2
    cout << setprecision(0) << 1.21658 << "\n"; // 1

    cout << setprecision(3) << 1.21648 << "\n"; // 1

    return 0;
}