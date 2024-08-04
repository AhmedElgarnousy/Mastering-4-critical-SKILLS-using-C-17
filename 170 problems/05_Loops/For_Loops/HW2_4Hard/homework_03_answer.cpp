#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
    *                  Medium: Problem #3: Is it Prime?                    *
    /**********************************************************************/
    /*
    Section: Loops.
    Description: Problem #3: Is Prime?
    Read an integer N (< 500) and print YES if it is prime, otherwise NO
    A prime number is greater than 1 AND cannot be formed by multiplying two smaller numbers.
        In other words, number%whatever != 0
        The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
    Level: Medium to hard Challenge
    */
    int num;
    cout << "Enter N less than 500: ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " NO" << " ";
            return 0;
        }
    }
    cout << num << " YES" << " ";

    return 0;
}