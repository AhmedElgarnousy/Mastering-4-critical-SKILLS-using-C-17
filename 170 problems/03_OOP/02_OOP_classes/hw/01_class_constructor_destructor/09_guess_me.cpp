#include <iostream>
#include <vector>
using namespace std;

/*
// Homework 9: Guess Me
-  What is the output of this program?
-  Find 2 memory leaks!
    -  Fix them!
*/

class A
{
private:
    int *x = nullptr;

public:
    A()
    {
        cout << "A constructor\n";
        x = new int;
        *x = 10;
    }
    ~A()
    {
        cout << "A destructor\n";
        }
};

int main()
{
    A *a = new A();

    return 0;
}
