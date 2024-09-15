#include <iostream>

using namespace std;

/****************************************************************
*          Easy: Problem #3: Even and Odd sum                   *
/***************************************************************/

int main()
{
    /*
    Section: DataTypesAndVariables.
    Description: Problem #3: Even and Odd sum
                 Given 8 space-separated integers, find the sum of those in even places and
                 the sum of those in odd places.
                 Note: Even place means the 2nd, 4th, 6th or 8th numbers,
                 odd places are the 1st, 3rd, 5th and 7th numbers.
                 Note: the 8 numbers will be on the same line
                 Note: Don’t print any welcome or by messages.
    Level: Easy Challenge
    */

    int n1, n2, n3, n4, n5, n6, n7, n8;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
    cout << n2 + n4 + n6 + n8 << " " << n1 + n3 + n5 + n7;
    return 0;
}