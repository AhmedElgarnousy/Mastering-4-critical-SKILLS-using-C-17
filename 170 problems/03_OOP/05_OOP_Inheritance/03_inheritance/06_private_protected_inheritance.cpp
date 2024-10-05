#include <iostream>
using namespace std;

class A
{
public:
    int x;

protected:
    int y;

private:
    // Always invisiable for outsiders
    int z;
};
class B : public A
{
    // x is public, y is protected
};
class C : protected A
{
    // x & y  protected
};
class D : protected A
{
    // Now invisible for outsiders
    // both x & y private
    /*
    void test()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    */
};
class E : public D
{
public:
    void func()
    {
        // x = 0; // invisible here
    }
};

int main()
{
    A a;
    a.x = 1; // can't access y or z

    B b;
    b.x = 1; // can't access y or z

    C c; // can't access x or y or z

    return 0;
}