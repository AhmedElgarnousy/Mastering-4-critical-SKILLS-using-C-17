#include <iostream>

using namespace std;
int my_abs(int x)
{
    throw 2;
    if (x < 0)
        return -x;
    return x;
}
// I don't throw exceptions - bad developer!
int my_abs_div(int x, int y) noexcept(true)
{
    return my_abs(x) / my_abs(y);
}
int main()
{
    // but wrong usage of noexcept TERMINATE program
    try
    {
        cout << my_abs_div(6, 2) << "\n";
    }
    catch (...)
    {
    }

    cout << "Bye\n";

    return 0;
}