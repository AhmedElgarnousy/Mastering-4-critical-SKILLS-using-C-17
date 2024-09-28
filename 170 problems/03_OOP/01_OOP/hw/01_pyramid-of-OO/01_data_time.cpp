#include <iostream>
using namespace std;
/*
- The usage of Date information is very common in development. As a junior software engineer, your team lead asked you to 
think in date struct. 

    - What are the possible data members? 
    - What are the possible member functions? No requirements. 
       Be flexible, as this is an infrastructure struct
    - Printing Concern: Users may want to a string representation in  different ways 
        - Year, Month, Day - Month, Year - Day-Month 

- What about a Time class (hour, minute, seconds): 
    - Describe 2 different ways to be potential member variables 
        - Assume you recognized one of them and your college another one 
        - Both of you debate a lot which one to use 
        - Defend the 2 choices. How to make a final decision instead of debating for hours?
*/

// answer

struct Date
{
    int years;
    int months;
    int days;
    string special_days[]; // holidays, eids

    void print_date_Y_M_D(){} 
    void print_date_D_M(){} 
    void print_date_M_Y(){} 
};
struct Time
{
    int hours; // 24, 12
    int minitues; // 60
    int seconds; // 60

    void print_time_24H(){}
    void print_time_12H(){}

};


int main()
{
    return 0;
}

/*
About Date & Time
- Although seems trivial, Date & time are source of pain & bugs in software
- Learn Why & Examples(link)
- Learn how to properly handle
- A lot of your future tasks will seems easy. With deep thoughts:
- Your realize critical concerns or different trade-offs among different designs
- Year 2038 problem(link) / Year 2000 problem(link))
- Leap second: 
- Nearly all modern operating systems assume that 1 day = 24 × 60 × 60 = 86400 seconds 
    in all cases. In UTC, 
    however, about once every year or two there is an extra second, called a "leap second." 
    The leap second is 
    always added as the last second of the day, 
    and always on December 31 or June 30. 
    For example, the last minute of the year 1995 was 61 seconds long, 
    thanks to an added leap second. Most computer clocks are not 
    accurate enough to be able to reflect the leap-second distinction. (src)(link)

*/