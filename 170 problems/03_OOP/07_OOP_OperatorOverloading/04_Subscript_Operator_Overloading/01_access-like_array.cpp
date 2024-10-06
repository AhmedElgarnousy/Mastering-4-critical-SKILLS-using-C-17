#include <iostream>
#include <vector>
using namespace std;

/*
- Time to know how string and vector acts like an array
- instead of:
    get(pos), set(pos, val)
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
    // Print
    void print()
    {
        cout << "(" << first << "," << second << ")\n";
    }
    // Setters & Getters
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
    // Operator overloading
    int operator[](int pos) const
    {
        if (pos == 0)
            return GetFirst();
        return GetSecond();
    }
};

int main()
{
    MyPair x(1, 2);
    // GET POSITION
    cout << x[0] << " " << x[1] << "\n";

    // SET POSITION
    // x[0] = 7;
    cout << x[0] << " " << x[1] << "\n";

    //  error: lvalue required as left operand of assignment
    //  x[0] = 7;
    // x[0] : just a function that return temp var e.g. y
    // so u r doing y = 7 this has nothing with object x
    // we need y to points in memory to first when [0]

    // `Lvalue` means points to address
    // could be reference/pointer
    // `Rvalue` means points to nothing
    // Just hold value
    return 0;
}
