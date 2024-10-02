#include <iostream>
using namespace std;
/*
// Copy Constructor
- A special constructor called in 4 cases
    - Initialize one object from another of the same type (2 ways)
    - Pass object (without refernece) to function
    - Return object from function

- If not provided compiler creates a default one
    - which again falls in the shallow copy issue with pointers!
    - Tip: Pointers -> define copy constructor
- Later: we learn Move constructor
*/
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
void fun1(MyNumber x) {}
MyNumber fun2()
{
    MyNumber e(1, 2);
    return e;
}

int main()
{

    MyNumber a;         // normal constructor
    MyNumber b(10, 20); // normal constructor

    // default copy constructor called by compiler in These 4 cases

    MyNumber c(b);  // case1: copy constructor to build c
    MyNumber d = b; // case2: copy constructor to initialize in declaration
    fun1(c);        // case3: copy constructor to pass object
    fun2();         // case4: copy constructor to return object

    a = b; // Assignment  NOT copy constructor

    a.PrintValueAndAddress();
    b.PrintValueAndAddress();
    c.PrintValueAndAddress();
    d.PrintValueAndAddress();
    return 0;
}

// val1 (ptr): 10 0xec13e0 0x61fde0
// val2 (int): 20 0x61fde8
// val1 (ptr): 10 0xec13e0 0x61fdd0
// val2 (int): 20 0x61fdd8
// val1 (ptr): 10 0xec13e0 0x61fdc0
// val2 (int): 20 0x61fdc8
// val1 (ptr): 10 0xec13e0 0x61fdb0
// val2 (int): 20 0x61fdb8