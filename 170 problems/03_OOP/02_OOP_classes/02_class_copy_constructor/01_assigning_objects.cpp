#include <iostream>
using namespace std;

// copy constructor
// this help us in assigned objects that have a pointers
// compiler copy member by member
// be careful from = with pointers
// shallow copy vs deep copy

class MyNumber
{
private:
    int *val1;
    int val2;

public:
    MyNumber(int x = 3, int y = 5)
    {
        val1 = new int;
        *val1 = x;
        val2 = y;
    }
    ~MyNumber()
    {
        // delete val1;
    }
    void PrintValueAndAddress()
    {
        cout << "val1 (ptr): " << *val1 << " " << val1 << " " << &val1 << "\n";
        cout << "val2 (int): " << val2 << " " << &val2 << "\n";
    }
};

int main()
{
    MyNumber a;
    MyNumber b(10, 20);

    a.PrintValueAndAddress();
    b.PrintValueAndAddress();
    b = a; // Assign a to b (shallow)
    b.PrintValueAndAddress();
    return 0;
}
// 3 0x66 0x77    a
// 5 0x33
// 10 0x26 0x79   b
// 20 0x23
//  b = a
// 3 0x66 0x33   b  // here is the problem, memory leak we have 2 pointers pointed to same location and this not we need
// 5 0x23

// val1 (ptr): 3 0x6e13c0 0x61fe00
// val2 (int): 5 0x61fe08
// val1 (ptr): 10 0x6e13e0 0x61fdf0
// val2 (int): 20 0x61fdf8
// val1 (ptr): 3 0x6e13c0 0x61fdf0
// val2 (int): 5 0x61fdf8