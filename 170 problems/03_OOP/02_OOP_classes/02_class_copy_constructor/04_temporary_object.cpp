#include <iostream>
using namespace std;

/*
// temporary object
- an object that doesn't have a name
- MAIN RULE: cannot be bound to a non-const refernece
- Later: Move semantic: void play4(MyNumber &&a)
*/
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
void play1(MyNumber a) {}
void play2(MyNumber &a) {} // non-const reference
void play3(const MyNumber &a) {}
MyNumber play4()
{
    MyNumber x(1, 1);
    return x; // Returned object is temporary
}

int main()
{
    // play1(MyNumber());

    // play2(MyNumber());   // cannot be bound to a non-const refernece
    play3(MyNumber());
    // play2(play4()); // cannot be bound to a non-const refernece

    // Notice: sometimes the copy constructor won't be called
    // Due to c++ return value optimization (RVO)
    // It eliiminates the temporary object created to
    // hold a function's return value

    return 0;
}