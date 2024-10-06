#include <iostream>
using namespace std;

/*
//Homework 2: Multiplying string
- Extend the functionality of string to
    allow multiplying with a number
        e.g. "hi"*2 -> "hihi"
*/

string operator*(const string &str, int times_Num)
{
    string res = "";
    for (int i = 0; i < times_Num; i++)
        res += str;
    return res;
}

int main()
{
    string a = "bad";
    string b = "I am " + a * 3 + ", right";

    cout << b;
    return 0;
}