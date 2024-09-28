#include <iostream>
using namespace std;

int main()
{
    // 2 *
    for (double r = 0.0; r != 1.0; r += 0.5)
        cout << "*" << "\n";

    // 5 #
    for (double r = 0.0; r != 1.0; r += 0.2)
        cout << "#" << "\n";

    // infinty!!!!!!!!
    // issue in 0.1
    for (double r = 0.0; r != 1.0; r += 0.1)
        cout << "$" << "\n";

    // 0.1 in binary representation 0.0(0011)
    // like 1/3 in decimal 0.(3)
    return 0;
}