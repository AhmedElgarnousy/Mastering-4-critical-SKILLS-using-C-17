#include <iostream>
using namespace std;
class A
{
public:
    int x;
    int y;
    A(int x, int y = 20) : x(x), y(y)
    {
    }
};
class B : public A
{
private:
    int z;

public:
    // c++11 inheritanting base class constructors
    using A::A;
};

int main()
{
    B b(3);
    cout << b.x << " " << b.y << "\n"; // 3 20
    return 0;
}