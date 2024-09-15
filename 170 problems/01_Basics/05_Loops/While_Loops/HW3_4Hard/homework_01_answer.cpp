#include <iostream>
using namespace std;

int main()
{
    /*************************************************************
    *                Hard: Problem #1: Find NOs                  *
    /************************************************************/

    /*
    Section: Loops.
    Description: Problem #1: Find NOs
    Read integer N, then read N strings.
    Print only the strings (of 2 letters).
    These 2 letters must be letter 'N' and letter 'O'
        . Regardless of lower or upper case
        . Regardless of the 2 letters order
        . E.g. print "No", "ON", "no" but ignore e.g. "YEs", "Noooo"
        . That is: a word of 2 letters only N and O
    Level: Hard Challenge
    */

    int num;
    cin >> num;
    string str;
    string strOut;

    while (num--)
    {
        cin >> str;
        if (str == "NO" || str == "No" ||
            str == "ON" || str == "On" ||
            str == "no" || str == "oN" ||
            str == "ON" || str == "on")
        {
            strOut += str + " ";
        }
    }
    cout << "output: " << strOut;

    return 0;
}