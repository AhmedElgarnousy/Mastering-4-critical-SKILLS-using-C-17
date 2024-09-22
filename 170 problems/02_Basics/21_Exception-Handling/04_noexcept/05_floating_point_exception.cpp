#include <iostream>
using namespace std;

int my_abs(int x)
{
    if (x < 0)
        return -x;
    return x;
}
int my_abs_div(int x, int y)
{
    return my_abs(x) / my_abs(y);
}
int main()
{

    try
    {
        cout << my_abs_div(6, 0) << "\n";
    }
    catch (...)
    {
        cout << "oooh\n";
    }

    cout << "Bye\n";

    return 0;
}
