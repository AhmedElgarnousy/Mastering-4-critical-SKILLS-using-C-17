#include <iostream>
#include <sstream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int hours, int minutes, int seconds)
    {
        SetTime(hours, minutes, seconds);
    }
    void SetTime(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    int GetTotalSeconds()
    {
        return hours * 60 * 60 + minutes * 60 + seconds;
    }
    int GetTotalMinutes()
    {
        return hours * 60 + minutes;
    }
    void printHHMMSS()
    {
        cout << ToSring(":") << "\n";
    }
    string ToSring(string seperator = "-")
    {
        ostringstream oss;
        oss << hours << seperator << minutes << seperator << seconds;
        return oss.str();
    }
    int GetHours()
    {
        return hours;
    }
    Time &SetHours(int hours)
    {
        if (hours < 0)
            hours = 0;
        this->hours = hours;

        return *this;
    }
    int GetMinutes()
    {
        return minutes;
    }
    Time &SetMinutes(int minutes)
    {
        if (minutes < 0)
            minutes = 0;
        this->minutes = minutes;

        return *this;
    }
    int GetSeconds()
    {
        return seconds;
    }
    Time &SetSeconds(int seconds)
    {
        if (seconds < 0)
            seconds = 0;
        this->seconds = seconds;

        return *this;
    }
};
int main()
{
    Time t(3, 1, 2);
    t.printHHMMSS(); // 3:1:2

    t.SetHours(5).SetMinutes(45).SetSeconds(13);
    t.printHHMMSS(); // 5:45:13
    /*
     */
    return 0;
}