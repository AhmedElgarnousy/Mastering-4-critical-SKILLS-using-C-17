#include <iostream>
#include <sstream>
using namespace std;
/*
// Homework 7: Change

- All the time we do code changes. The best code is
    one changed the minimum
- We got a request to remove the 3 integers and replace with int total_seconds
    - Do necessary coding changes
- Identify one good coding tip if was applied in this
    code will make us change less code
*/

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time(int hours, int minutes, int seconds) : hours(hours), minutes(minutes), seconds(seconds)
    {
    }
    void SetTime(int hours, int minutes, int seconds)
    {
        this->hours = hours,
        this->minutes = minutes,
        this->seconds = seconds;
    }
    int GetTotalSeconds() const
    {
        return hours * 60 + minutes * 60 + seconds;
    }
    int GetTotalMinutes() const
    {
        return hours * 60 + minutes;
    }
    void PrintHHMMSS() const
    {
        cout << hours << ":" << minutes << ":" << seconds << "\n";
    }
    string ToString(string seperator = "-")
    {
        ostringstream oss;
        oss << hours << seperator << minutes << seperator << seconds;
        return oss.str();
    }

    int GetHours() const
    {
        return hours;
    }
    void SetHours(int hours)
    {
        this->hours = hours;
    }
    int GetMinutes() const
    {
        return minutes;
    }
    void SetMinutes(int minutes)
    {
        this->minutes = minutes;
    }
    int GetSeconds() const
    {
        return seconds;
    }
    void SetSeconds(int seconds)
    {
        this->seconds = seconds;
    }
};

int main()
{
    return 0;
}