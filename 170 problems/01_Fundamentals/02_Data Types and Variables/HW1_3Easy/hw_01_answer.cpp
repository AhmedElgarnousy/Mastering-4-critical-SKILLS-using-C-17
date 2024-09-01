#include <iostream>

using namespace std;

int main()
{
    /*****************************************************************************
    *                   Easy: Problem #1: Math operations                        *
    /****************************************************************************/

    int num1, num2;
    cout << "Runnign " << "\n";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << "= " << num1 + num2 << "\n"
         << num1 << " - " << num2 << "= " << num1 - num2 << "\n"
         << num1 << " * " << num2 << "= " << num1 / num2 << "\n"
         << num1 << " / " << num2 << "= " << num1 * num2
         << endl;

    return 0;
}