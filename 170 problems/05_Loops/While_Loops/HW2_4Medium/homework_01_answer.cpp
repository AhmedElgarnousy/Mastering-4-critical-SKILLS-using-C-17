#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
*                  Medium: Problem #1: Print Diamond          *
/**********************************************************************/

    /*
    Section: Loops.
    Description: Problem #1: Print diamond
    Read an integer N, then print diamond of 2N rows as below
    Level: Medium Challenge

    int N;
    cin >> N;

    int i = N - 1;
    int Spacestep = 1;

    int spaces = i, stars = Spacestep;

    int N2 = N;

    while (N--)
    {

        while (spaces--)
            cout << " ";

        while (stars--)
            cout << "*";

        i--;
        spaces = i;
        Spacestep += 2;
        stars = Spacestep;

        cout << "\n";
    }

    int i2 = N2 * 2 - 1;
    int Spacestep2 = 0;

    while (N2--)
    {
        stars = i2;
        spaces = Spacestep2;

        while (spaces--)
            cout << " ";

        while (stars--)
            cout << "*";

        cout << "\n";

        i2 -= 2;
        Spacestep2++;
    }
    */

    return 0;
}