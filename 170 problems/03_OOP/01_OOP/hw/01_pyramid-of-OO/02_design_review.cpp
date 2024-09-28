
#include<iostream>

using namespace std;

/*
- code passed unit testing 
- think in a critical design tip
- provide your feedback about these class
*/
struct DateTime{
    int day;
    int month;
    int year;
    int hours;
    int mintues;
    int seconds;

    // constructor
    DateTime(int day, int month, int year,
        int hours, int minutes, int seconds) {
    }

    // A bunch of Data functions
    // ...
    // A bunch of Time functions
    // ...
};

/*
Ans: might be good to seperate date and time functionalility in 2 classes
- KISS: keep it simple
- easy to debug
- good for future changes
*/

int main()
{

    return 0;
}