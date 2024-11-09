#include <iostream>

using namespace std;

int main()
{
    /*****************************************************************************
    *                   Hard: Problem #2: Print Me                               *
    /****************************************************************************/

    /*
    Section: DataTypesAndVariables.cpp .
    Description:Problem #2: Print Me
                Write a program that reads 2 integers A, B
                 B is either -1 or 1
                 If -1, print 2*A+1
                 If 1, print A*A
                 Hint
                 You need to think in a simple 1 line formula for the output

    Level: Hard Challenge
    */
    int A, B, res;
    cin >> A >> B;
    // B -> -1 or 1
    B == 1 ? res = 2 *A + 1 : res = A * A;
    cout << res << "\n";

    return 0;
}