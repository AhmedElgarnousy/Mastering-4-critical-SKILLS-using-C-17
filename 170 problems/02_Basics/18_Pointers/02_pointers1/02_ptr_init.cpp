#include<iostream>
using namespace std;

// pointer initialization

int main()
{
    double x = 10;
    double* ptr = &x;

    // double* ptr2 = NULL; // C-Style - ok


    // c++11
    double* ptr2 = nullptr;  // better [preferred]
    double* ptr3 = 0;  // ok- like nullptr
    // double* ptre = 1;  // CE: must be 0 or address

    double* ptr4;  // Garbage - Don't write that

    return 0;
}