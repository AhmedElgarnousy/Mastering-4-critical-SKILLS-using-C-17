#include <iostream>

using namespace std;

/*
using throw will do some work to keep the same
// execption propagated up
// DON't use throw e unless a good reason
*/

void f3()
{
    throw runtime_error("A run time error\n");
}
void f2()
{
    try
    {
        f3();
    }
    catch (runtime_error &e)
    {
        cout << &e << "\n";
        throw; // SAME
        // throw e; //  make a COPY
    }
}

void f1()
{
    try
    {
        f2();
    }
    catch (runtime_error &e)
    {
        cout << &e << "\n";
        throw; // SAME
        // throw e; //  make a COPY
    }
}

int main()
{
    try
    {
        f1();
    }
    catch (runtime_error &e)
    {
        cout << &e << "\n";
        throw; // SAME
        // throw e; //  make a COPY
    }

    return 0;
}