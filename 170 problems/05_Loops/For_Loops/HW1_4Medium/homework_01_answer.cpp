#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
    *                  Medium: Problem #1: Find Special Pairs              *
    /**********************************************************************/
    /*
    Problem #1: Find Special Pairs
        ● Count how many positive integers (X and Y) meet the following criteria:
            ○ X in the range [50-300]
            ○ Y in the range [70-400]
            ○ X < Y
            ○ (X+Y) divisible by 7
        ● Output
            ○ 8040
    */
    int count = 0;
    for (int x = 50; x <= 300; x++)
    {
        for (int y = 70; y <= 400; y++)
        {
            if (x < y && (x + y) % 7 == 0)
                count++;
        }
    }
    cout << count;

    return 0;
}