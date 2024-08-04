#include <iostream>

using namespace std;

/*
Background: Fixed Sliding Window

● Assume we have a list: 1 0 3 -4 2 -6 9 
● Let’s imagine our sliding window (sublist) size is 3 
● Let’s print out all windows of length 3, and their sum 

● 
    ○   1 0 3 ⇒ sum = 4
    ○     0 3 -4 ⇒ sum = -1       [observe that 0 and 3 are common] 
    ○       3 -4 2 ⇒ sum = 1 
    ○         -4 2 -6 ⇒ sum = -8 
    ○            2 -6 9 ⇒ sum = 5 
● Observe the relationship between any 2 consecutive windows: 
    ○  Consecutive windows share most elements; except for a change in the first/last element 
● Variable-sized sliding window: its size grows and shrinks


Problem #2: Fixed Sliding Window 
 
● Read in integers K and N, (where K <= N), and then read N < 200 integers.
●  Find the sub-array (consecutive numbers) of K elements with the maximum sum 

●   Input 3 7     1 0 3 -4 2 -6 9 
  
  ○ Let’s list all sub-arrays of length 3 
       ○ 1 0 3 ⇒ sum = 4
       ○ 0 3 -4 ⇒ sum = -1 
       ○ 3 -4 2 ⇒ sum = 1 
       ○ -4 2 -6 ⇒ sum = -8 
       ○ 2 -6 9 ⇒ sum = 5 
● Output: 4 6 5 (The sub-array from indices 4 to 6 has a maximum sum of 5) 
● an you do it without nested loops? There are 2 ways
*/


int main()
{

    return 0;
}