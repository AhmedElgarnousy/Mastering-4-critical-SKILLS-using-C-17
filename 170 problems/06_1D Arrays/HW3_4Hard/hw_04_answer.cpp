#include <iostream>

using namespace std;


/*
Problem #4: Josephus Problem 

● Read integers N (< 200) and K (<= 1000000). Code for small values of K first 
○ ● There is a group of N people in a circle, numbered 1, 2, …. N 

○ ○ ○ 

● We imagine that someone is controlling the game
 Starting from Person#1, we count K steps - and remove the person at the kth position!
  We keep doing so until only 1 person remains. The winner! 
  Input 4 2 
  
  ○ ○ ○ ○ 
  ● Find the game winner for the following game: 
  
  We have people at: 1, 2, 3, 4. The controller starts from #1
   Count 2 people/steps (#2 removed), then start from #3 
   Count 2 people/steps (#4 removed), then start from #1 
   Count 2 people/steps (#3 removed), #1 is the winner 
   
   Output 
   
   ○ People removed in the order: 2 4 3 1 [same answer as for 10 2. Why?]


   ● Example input ⇒ output 
        ○ 7 1 ⇒ 1 2 3 4 5 6 7
        ○ 7 2 ⇒ 2 4 6 1 5 3 7 
        ○  7 3 ⇒ 3 6 2 7 5 1 4 
        ○  7 4 ⇒ 4 1 6 5 7 3 2 
        ○  7 5 ⇒ 5 3 2 4 7 1 6 
        ○  7 6 ⇒ 6 5 7 2 1 4 3 
        ○  7 7 ⇒ 7 1 3 6 2 4 5 
        ○  7 14 ⇒ 7 2 6 3 5 4 1 
        ○  7 1000 ⇒ 6 3 2 1 4 7 5 
        ○  7 99999 ⇒ 4 7 5 2 1 3 6

*/
int main()
{

    return 0;
}