#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;
int main()
{
    cout << 5.0 << "\n"; // 5 (.0 always removed)
    cout << 6.7 << "\n"; // 6.7

    double a{0.1};
    double b{1.0 / 3.0};

    cout << setprecision(20); // print 20 number after digit

    cout << a << "\n"; // 0.10000000000000000555
    cout << b << "\n"; // 0.33333333333333331483 [should be 0.(3) in math]

    return 0;
}