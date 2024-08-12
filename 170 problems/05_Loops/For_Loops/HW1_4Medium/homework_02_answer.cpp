#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
    *                  Medium: Problem #2: I Find All Quadruples           *
    /**********************************************************************/
    /*
    Section: Loops.
    Description: Problem #3: Find all quadruples
    Count how many (a, b, c, d) with following property:
        1 <= a, b, c, d <= 200
        a + b = c + d
     Code it once using 4 loops
        How much time does it take!
     Code it once using 3 loops only
     Future: With hash tables, you can do it using 2 loops only

    Level: Medium to hard Challenge
    */

    int count = 0;
    for (int a = 1; a <= 200; a++)
    {
        for (int b = 0; b <= 200; b++)
        {
            for (int c = 0; c <= 200; c++)
            {
                for (int d = 0; d <= 200; d++)
                {
                    if (1 <= a && a + b == c + d && b <= 200 && c <= 200 && d <= 200)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}