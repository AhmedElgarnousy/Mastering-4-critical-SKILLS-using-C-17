#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, c = 30, d = 40;

    cout << (a + b == c) << " \n";         // true
    cout << (a + b + c >= 2 * d) << " \n"; // false

    cout << (a > 5 || d < 30) << "\n";  // true
    cout << (a > 5 && d < 30) << "\n";  // false
    cout << (a <= b && b <= c) << "\n"; // true

    cout << (a > 5 && d < 30 || c - b == 10) << "\n"; //
    cout << (a <= b && b <= c && c <= d) << "\n";

    cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";
    cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";

    cout << (a == 10 || b != 20 && c != 30 || d != 40) << "\n";
    cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";

    return 0;
}