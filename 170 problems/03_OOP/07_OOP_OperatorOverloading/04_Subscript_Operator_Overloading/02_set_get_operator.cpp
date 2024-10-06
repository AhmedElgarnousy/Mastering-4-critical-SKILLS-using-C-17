#include <iostream>
#include <vector>
using namespace std;

/*
- so if we return reference `int&` then
    it's now Lvalue and can change the object
- Notice exact function name ?!
    - yes but one with const
    - const function called by const objects
    - non-const function called by non-const objects
- can we declare [] outside class?
    - No
    - [],=,-> and () must be non-static member functions
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
    int &operator[](int pos)
    {
        if (pos == 0)
            return first;
        return second;
    }
};

int main()
{
    MyPair x(1, 2);
    // GET POSITION
    cout << x[0] << " " << x[1] << "\n";

    // SET POSITION
    x[0] = 7;
    cout << x[0] << " " << x[1] << "\n";

    return 0;
}
