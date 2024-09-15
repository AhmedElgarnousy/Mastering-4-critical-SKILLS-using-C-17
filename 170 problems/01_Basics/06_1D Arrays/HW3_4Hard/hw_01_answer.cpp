#include <iostream>

using namespace std;
/*
Problem #1: Recamán's Sequence 
● The first terms of this sequence are 0, 1, 3, 6, 2, 7, … 
● So, looking at the value 7, its index is 5 (in a zero-based array) 
The next value is either: 
    ■ LastValue - LastIndex - 1 if the following 2 conditions are satisfied: 
        ● 1) value > 0 2) It hasn’t already appeared within the sequence 
        ● e.g. 7 (last value)-last index (5)-1 = 7-5-1 = 1 (> 0, but is already in the sequence) 
    ■ Or LastValue + LastIndex + 1 = 7+5+1 = 13 
● Read in a zero-based integer index ([1, 200]), and print this index’s value 
    ○  e.g. (6 ⇒ 13), (9 ⇒ 21), (17 ⇒ 25) 
● Don’t use nested loops 
● The series is: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22, 10, 23, 9, 24, 8, 25, 43
*/

int main()
{

    return 0;
}