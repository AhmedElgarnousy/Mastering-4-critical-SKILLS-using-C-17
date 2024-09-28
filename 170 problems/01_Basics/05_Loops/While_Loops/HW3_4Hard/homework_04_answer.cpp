#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /***********************************************************************
    *                  Hard: Problem #4:  Special Sum                      *
    /**********************************************************************/
    /*
    Section: Loops.
    Description: Problem #4: Special Sum
    Read integer T for number of test cases.
     For each test case read integer N. Then read N integers a, b, c
     Output: Compute the sum of the following expression:
     a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
     That is the k-th number is repeated k times
    Level: Hard Challenge
    */

    int testCases, numsTestcase, num, idx = 0;
    int result = 0;
    cout << "Enter N for testcases: ";
    cin >> testCases;
    while (testCases--)
    {
        cout << "Enter N for nums for testcase: ";
        cin >> numsTestcase;
        while (numsTestcase--)
        {
            cin >> num;
            idx++;
            result += pow(num, idx);
        }
        cout << "result: " << result << "\n";
        idx = result = 0;
    }

    return 0;
}