#include <iostream>
using namespace std;
/*
1) What are the possible ways to finish Class C constructor?
2) How many times ClassA Constructor will be called?
    - Why?
    - Give a tip for the coder
*/
/*
Answer
1) the only to use the initializer list to init the const areguments
2)  - ClassA called 4 times
    - Give a tip for the coder
*/
class ClassA
{
public:
    ClassA()
    {
        cout << "ClassA Constructor\n";
    }
};

class ClassB
{
private:
    ClassA aa;
    int x;

public:
    ClassB(int x)
    {
        this->aa = ClassA();
        this->x = x;
    }
};
class ClassC
{
private:
    int &y;
    ClassB bb;

public:
    // ClassC(int &y, const ClassB &bb) : y(y), bb(ClassB(3))
    ClassC(int &y, const ClassB &bb) : y(y), bb(bb)
    {
    }
};

int main()
{
    int hello = 10;
    ClassB b(5);
    ClassC cc(hello, b);

    return 0;
}