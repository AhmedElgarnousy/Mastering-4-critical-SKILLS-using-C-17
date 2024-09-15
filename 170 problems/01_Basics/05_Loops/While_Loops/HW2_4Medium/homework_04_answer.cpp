#include <iostream>
using namespace std;

int main()
{

    /***********************************************************************
    *                  Medium: Problem #4: Minimum of Values           *
    /**********************************************************************/
    /*
    Section: Loops.
    Description: Problem #4: Minimum of values
    Input: Read integer T for a number of test cases.
    For each test case read integer N followed by reading N integers.
    Output: For each test case, print the minimum of the N integers
    Level: Medium Challenge

    int numOfTestCases;
    cout << "N for test cases: ";
    cin >> numOfTestCases;
    int testCaseNums;
    int num, min = INT_MAX;
    int i = 0;
    while (numOfTestCases--)
    {
        i++;

        testCaseNums;
        cout << "Enter N for test case " << i << ":";
        cin >> testCaseNums;

        cout << "Enter the nums values:";
        while (testCaseNums--)
        {
            cin >> num;
            if (num < min)
                min = num;
        }
        cout << "min of test case " << i << " is:" << min << "\n";
        min = INT_MAX;
    }
    */

    return 0;
}