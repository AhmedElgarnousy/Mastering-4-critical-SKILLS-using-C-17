#include <iostream>

using namespace std;

int main()
{
    /*****************************************************************************
    *                   Medium: Problem #2: Swapping 2 numbers!                  *
    /****************************************************************************/

    /*
    Section:     DataTypesAndVariables.cpp .
    Description: Problem #2: Swapping 2 numbers!
    Level:       Medium Challenge
    */
    int num1, num2;
    int swap_var;
    cin >> num1 >> num2;

    swap_var = num1;
    num1 = num2;
    num2 = swap_var;

    cout << num1 << " " << num2 << endl;

    return 0;
}