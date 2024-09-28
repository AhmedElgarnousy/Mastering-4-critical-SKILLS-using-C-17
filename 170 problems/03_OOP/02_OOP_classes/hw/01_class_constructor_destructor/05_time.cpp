#include <iostream>
#include <sstream>
using namespace std;
/*
\\ Homework 5: Time!
- Identify 2 changes for code clarity
- Identify a bug
- Identify 2 code duplications
- Identify missing inputs
    verifications (user mistakes)
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
    Time t(0, 1, 1);
    t.PrintHHMMSS();

    t.SetHours(2);
    t.SetMinutes(2);
    t.SetSeconds(2);

    t.PrintHHMMSS();
    return 0;
}