#include <iostream>
using namespace std;

struct A
{
    int x, y;
};
struct B
{
    int x, y;
    B(int x, int y) : x{x}, y{y}
    {
    }
};

struct C
{
    int x, y;
    C(int x, int y) : x{x}, y{y}
    {
    }
    C(const initializer_list<int> &v)
    {
        x = *(v.begin());
        y = *(v.begin() + 1);
    }
};
int main()
{
    A a{1, 3};  // Aggregate initialization
    B b{2, 9};  // Regular constructor
    C c1{3, 7}; // Initializer_List
    C c1(3, 7); // Regular constructor

    // Priority: Initializer_list, regular constructor, aggregate

    // be careful syntax is much similier
    // paranthese and curly paranthese

    return 0;
}