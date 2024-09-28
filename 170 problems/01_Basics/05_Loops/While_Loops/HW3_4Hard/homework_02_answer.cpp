#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /**************************************************************
    *               Hard: Problem #2: Reverse number              *
    /*************************************************************/
    /*
    Section: Loops.
    Description: Problem #2: Reverse number
    Read an integer N, then find its reverse integer R
        Print R R*3
     input ⇒ Output
        123 ⇒ 321 963
    Level: Hard Challenge
    */
    int num;
    cin >> num;
    int digit, N = num, R = 0;

    // calc the num of digits
    int NumOfDigs;
    while (num)
    {
        NumOfDigs++;
        num /= 10;
    }

    // calc the num order
    int order = pow(10, NumOfDigs - 1);
    while (N)
    {
        digit = N % 10;
        R += digit * order;
        order /= 10;
        N /= 10;
    }

    cout << "\nR R*3: " << R << " " << R * 3;
    return 0;
}