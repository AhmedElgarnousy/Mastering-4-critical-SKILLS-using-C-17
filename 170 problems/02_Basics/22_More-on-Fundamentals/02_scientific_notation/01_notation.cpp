#include <iostream>

using namespace std;

// shorthand for writing length numbers

int main()
{
    // your turn, make one digit in the first
    cout << (3.450e1 == 34.50) << "\n";
    cout << (123.005 == 1.23005e2) << "\n";
    cout << (146000 == 1.46000e5) << "\n";
    cout << (146000.001 == 1.46000001e5) << "\n";
    cout << (0.0000000008 == 8e-10) << "\n";
    cout << (34500.0 == 3.45000e4) << "\n";

    cout << 6.7 << "\n"; // 6.7
    // that why important to understand scientific notation
    // it printed in this form
    cout << 9876543.21 << "\n"; // 9.87654e+06

    // for any num to print with scientific notation
    cout.setf(ios::scientific);
    // or cout<<std::scientific;

    cout << 6.7 << "\n";          // 6.700000e+00
    cout << 9876543.21 << "\n";   // 9.87654321e+06Z
    cout << 0.0000000008 << "\n"; // 8.000000e-10
    cout << 146000.001 << "\n";   // 1.460000e+05

    std::cout.precision(10);
    cout << 146000.001 << "\n"; // 1.4600000100e+05

    // use standard not scientific
    cout.setf(ios::fixed, ios::floatfield);
    // show the decimal point for all floating point numbers
    cout.setf(ios::showpoint);

    cout << 146000.001 << "\n"; // 146000.0010000000
    cout << 100.0 << "\n";      // 100.0000000000

    return 0;
}