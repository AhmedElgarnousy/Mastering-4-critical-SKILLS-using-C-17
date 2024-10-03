#include <iostream>
using namespace std;
/*
Homework 3: Design Review
Code wise: car has all functions it
needs to provide
○ It passed system tests
● What is wrong?
○ Provide a tip

*/

int main()
{
    return 0;
}
/*
The semantic is wrong. There is no clear and strong has-a relationship. Never do that in inheritance

A car is not an Engine. The car is not 4 wheels. Sometimes we can stack things like inheritance and it works for now (and be a big mess later)

The right relationship is composition. The car has an engine and 4-wheels

Prefer composition over inheritance most of the time, even if inheritance makes more sense unless it really should be an inheritance. Think twice.
*/
