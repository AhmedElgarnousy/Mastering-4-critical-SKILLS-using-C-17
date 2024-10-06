#include <iostream>
using namespace std;

/*
// `Operators`
- Unary: ++, --
- Binary
    - Arithmetic: +,-,*,/,%
    - Relational: <,<=,>==,!=
    - Logical: &&,||,!
    - Bitwise: &,|,<<,>>,~,^
    - Assignment: =,+=,-=.*=,/=,%=
- Ternary: ?:

// `Operator Overlaoding`
- let you change function name to an operator
- e.g. add -> +
- called operator function

- operator +: is a memeber function
- z = x + y
- z = x.operator+(y)
*/

class MyPair
{
private:
    int first;
    int second;

public:
    MyPair(int first, int second) : first(first), second(second)
    {
    }

    MyPair Add(const MyPair &c2)
    {
        MyPair &c1 = *this;
        return MyPair(c1.GetFirst() + c2.GetFirst(),
                      c1.GetSecond() + c2.GetSecond());
    }
    MyPair operator+(const MyPair &c2)
    {
        MyPair &c1 = *this;
        return MyPair(c1.GetFirst() + c2.GetFirst(),
                      c1.GetSecond() + c2.GetSecond());
    }

    void print()
    {
        cout << "(" << GetFirst() << "," << GetSecond() << ")" << "\n";
    }
    int GetFirst() const
    {
        return first;
    }
    void SetFirst(int first)
    {
        this->first = first;
    }
    int GetSecond() const
    {
        return second;
    }
    void SetSecond(int second)
    {
        this->second = second;
    }
};

int main()
{
    MyPair x(2, 2);
    MyPair y(10, 20);
    // MyPair z = x.Add(y);
    MyPair z = x + y;
    z.print();
    return 0;
}