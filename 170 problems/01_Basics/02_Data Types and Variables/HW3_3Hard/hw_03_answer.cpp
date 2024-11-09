#include <iostream>

using namespace std;

int main()
{

    /*****************************************************************************
    *                   Hard: Problem #3: Sum numbers from 1 to N                *
    /****************************************************************************/

    /*
    Section: DataTypesAndVariables.cpp .
    Description: Problem #3: Sum numbers from 1 to N
                Write a program that reads integer N and Print the sum from 1 to N
                E.g. If input N = 5, then Output is: 15
                Why? As 1+2+3+4+5 = 15
                Below table of more values
                3 ⇒ 6 (1+2+3)
                4 ⇒ 10 (1+2+3+4)
                5 ⇒ 15 (1+2+3+4+5)
                You need to find a simple 1 line formula to solve the problem :)
                Hint: Let N = 8. Write numbers from 1 to 8
                What is the sum of 1st and 8th number? sum of 2nd and 7th? And so on
                Your formula should be good for even and odd N. Be careful programmer!
                What is the maximum N after it overflow occurs? Recall int max is 2147483647

    Level: Hard Challenge
    */
    int N;
    cin >> N;
    int start = 1, end = N, res = start + end;
    // start != end + 1? start++, end--, res+= start+end:
    cout << INT_MAX << '\n'; // 2^31
    /*
    while (N != 1)
    {
        res += N;
        N--;
    }
    cout << res << "\n";
    */
    return 0;
}