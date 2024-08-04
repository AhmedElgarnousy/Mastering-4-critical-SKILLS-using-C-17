#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
    *                  Hard: Problem #3: Multiplication table              *
    /**********************************************************************/
    /*
    Section: Loops.
    Description: Problem #3: Multiplication table
    Read an integer N and M, then print NxM lines for their multiplication table.
    Level: Hard Challenge
    */

    int N, M;
    cin >> N >> M;
    int i = 1;
    int j = 1;
    int Mspare = M;

    while (N--)
    {
        while (M--)
        {
            cout << i << "*" << j << "=" << i * j << "\n";
            j++;
        }
        j = 1;
        i++;
        M = Mspare;
    }

    return 0;
}