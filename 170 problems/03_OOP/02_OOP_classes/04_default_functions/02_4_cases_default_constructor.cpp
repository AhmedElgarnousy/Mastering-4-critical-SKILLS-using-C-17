#include <iostream>
using namespace std;

/*
    // Default constructor has `empty` body
    - we have now 4 cases for default construct that
        has empty body
    - 1) Explicitly declare/define with empty body
    - 2) Write nothing and no parameterized constructor
    - 3) Declare/define in class with default
    - 4) Declare in class and in separatye definition use default
*/

class A
{
public:
    A() {} // user-provided constructor
    int i;
    string s;
};

class B
{
public:
    // NOT user-provided constructor
    // implicit generated default constructor
    int i;
    string s;
};

class C
{
public:
    // NOT user-provided constructor
    C() = default; // assign default values
    int i;
    string s;
};

class D
{
public:
    // user-provided constructor ... OOOPS
    // even if u implement it later by default
    // compiler doesn't knows
    D();
    int i;
    string s;
};
D::D() = default;

// In case1 we do something, other compiler generates
// 1 is different from (2,3,4)
// yes i know
// no no 1,4 are different from 2 ,3

int main()
{
    // for (int i = 0; i < 100; i++)
    // {
    // Default-initialization - undermined value
    A a1;
    B b1;
    C c1;
    C d1;
    cout << a1.i << "\n"; // typically garbage
    cout << b1.i << "\n"; // typically garbage
    cout << c1.i << "\n"; // typically garbage
    cout << d1.i << "\n"; // typically garbage

    // value-initialization triggered by () or {}
    A a2{};
    B b2{};
    C c2{};
    C d2{};
    cout << a2.i << "\n"; // still garbage
    cout << b2.i << "\n"; // always 0
    cout << c2.i << "\n"; // always 0
    cout << d2.i << "\n"; // still garbage
    // }
    return 0;
}

// c++ is a nightmare when comes to initialization
// this is a tiny xase
// tips
// - Always init variables
// - better using {} style