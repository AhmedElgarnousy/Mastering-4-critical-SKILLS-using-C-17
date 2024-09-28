#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int dcmp(double a, double b, double EPS = 1e-10)
{
    if (fabs(a - b) <= EPS)
        return 0; // Equal
    if (a < b)
        return -1; // smaller
    return 1;      // a > b
}

int main()
{
    double a = 3.0 / 7.0;
    double b = 0.1 + 3.0 / 7.0 - 0.1;

    cout << (a == b) << "\n";          // 0
    cout << (dcmp(a, b) == 0) << "\n"; // 1

    cout << (dcmp(1.0 / 3.0, 0.33333333333333) == 0) << "\n";  // 1
    cout << (dcmp(1.0 / 3.0, 0.333333333) == 0) << "\n";       // 0
    cout << (dcmp(1.0 / 3.0, 0.333333333, 1e-9) == 0) << "\n"; // 1

    return 0;
}