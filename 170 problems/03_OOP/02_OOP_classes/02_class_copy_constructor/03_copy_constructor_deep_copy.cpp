#include <iostream>
using namespace std;

// copy constructor
// takes an object of same type
// always use const and &
// const is optional but preffered
// no & -> compile error
class MyNumber
{
private:
    int *val1;
    int val2;

public:
    MyNumber(int x = 3, int y = 5)
    {
        cout << "Normal Constructor\n";
        val1 = new int;
        *val1 = x;
        val2 = y;
    }
    MyNumber(MyNumber &another)
    {
        cout << "Copy Constructor\n";
        val1 = new int;
        *val1 = *another.val1; // deep cpy to value not address
        val2 = another.val2;
    }
    ~MyNumber()
    {
        delete val1;
    }
    void printValueAndAddress()
    {
        cout << *val1 << " " << val1 << "\n";
        cout << val2 << " " << &val2 << "\n";
    }
};

int main()
{
    MyNumber a;    // normal construtor
    MyNumber b(a); // copy constructor

    a.printValueAndAddress();
    b.printValueAndAddress();

    return 0;
}

// 3 0x7d22f0
// 5 0x61fe08
// 3 0x2592490
// 5 0x61fdf8