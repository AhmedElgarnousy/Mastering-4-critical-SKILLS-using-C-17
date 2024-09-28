#include <iostream>
using namespace std;

/*
// Homework 3: Const & In constructor
- In a recent code review, senior TL asked you to change
    the constructor to use const and &
- Why do you think so?
*/

// By using & : we use same memory object hence faster and low memory
// By using const : we tell developers you shouldn't try to change this parameter

class A
{
};
class B
{
};
class C
{
};
class D
{
private:
    A aa;
    B bb;
    C cc;

public:
    // D(A a, B b, C c) : aa(a), bb(b), cc(c)
    // {
    // }
    D(const A &a, const B &b, const C &c) : aa(a), bb(b), cc(c)
    {
    }
};

int main()
{

    return 0;
}