#include <iostream>

using namespace std;

// explicit aka: you force casting to
// a specific data type

int main()
{

    double x = 10.5;
    // C-style casting - DON'T use
    cout << (int)x << " " << int(x) << "\n"; // 10 10

    // c++ style: conbersion using cast operator
    // Express the intent of the programmer
    // less readable ? but may search code for casting easier
    // compile time checking ability: safer with pointers
    cout << static_cast<int>(x) << "\n"; // 10

    char c = 10;         // 1 byte
    int *p1 = (int *)&c; // 4 bytes BAD no CE
    // int *p2 = static_cast<int *>(&c); // 4 bytes BAD no CE

    // const_cast: removes the const modifier - DON'T
    // reinterpret_cast to cast any pointer or integral type
    // to any other pointer or integeral - DON'T

    return 0;
}