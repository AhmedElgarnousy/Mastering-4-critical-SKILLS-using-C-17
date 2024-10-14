#include <iostream>
using namespace std;

/*
-syntx:
    - x++, ++x postfix , prefix
    - ++ which one?
    - use extra integer param to indicate postfix
        - same if non-member function
- Logic:
    - prefix: increment first
    - postfix: increment second
- Performance
    - postfix create extra object
    - so a slower function
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

    // ++x prefix increment operator
    MyPair &operator++()
    {
        ++first, ++second; // increment first
        return *this;      // then return reference
    }
    // x++ postfix increment operator
    // Don't return MyPair&: this is local var
    MyPair operator++(int)
    {
        MyPair cpy = *this; // copy first
        ++first, ++second;  // Then increment
        return cpy;
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
    MyPair x1(1, 2);
    (++x1).print(); // (2,3)

    MyPair x2(1, 2);
    x2++.print(); // (1,2)
    x2.print();   // (2,3)

    return 0;
}