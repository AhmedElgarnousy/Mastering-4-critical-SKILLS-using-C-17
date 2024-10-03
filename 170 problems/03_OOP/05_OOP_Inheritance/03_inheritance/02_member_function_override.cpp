#include <iostream>
using namespace std;
class A
{
public:
    int GetValue()
    {
        return 10;
    }
    string GetStr()
    {
        return "hello";
    }
};
class B : public A
{
public:
    int GetValue()
    {
        return 20;
    }
};

int main()
{
    B b1;
    cout << b1.GetValue() << " " << b1.GetStr() << "\n"; // 20  hello
    B *b2 = new B();
    cout << b2->GetValue() << " " << b2->GetStr() << "\n"; // 20  hello
    return 0;
}