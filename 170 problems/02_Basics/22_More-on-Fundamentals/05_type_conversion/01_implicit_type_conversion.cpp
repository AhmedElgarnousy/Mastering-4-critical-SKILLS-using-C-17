#include <iostream>

using namespace std;

// implicit aks: means automatic casting

int main()
{
    bool status = 42;
    status = -42;
    // only zero make it false
    double salaryD = 100.6;

    // from double to int. you lose precision .x
    int salaryI = salaryD; // 100

    // overflow: implementation-defined result
    short val = salaryI;

    // typically 255: 2^8 -1
    // later binary: 11111111
    unsigned char blood = -1;

    // from signed variable to unsigned = corruption
    signed int x = -100;
    unsigned int y = x; // be careful

    return 0;
}