#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
    *                  Easy: Problem #5: Special Average                *
    /**********************************************************************/

    /*
    Section: Loops.
    Description: Problem #5: Special Average
    Read integer N, followed by reading N numbers. Print 2 values
     The average of the numbers in odd positions (1st, 3rd, 5th, …)
    The average of the numbers in even positions (2nd, 4th, 6th, …)
    Level: Easy Challenge

    int N, num;
    cin >> N;
    int idx = 0;
    int oddAvg = 0, evenAvg = 0;
    while (N--)
    {
        cin >> num;
        idx++;

        if (idx % 2 == 0)
            evenAvg += num; // sum of nums of even index
        else
            oddAvg += num; // sum of nums of odd index
    }
    oddAvg = oddAvg / ((idx + 1) / 2); // avg of the sum of nums of odd index

    evenAvg = evenAvg / (idx / 2); // avg of the sum of nums of even index

    cout << oddAvg << " " << evenAvg << "\n";
    */
    return 0;
}