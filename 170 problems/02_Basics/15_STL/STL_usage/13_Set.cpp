#include <iostream>
#include <set>

using namespace std;

/*
void print(set<string> &s)
{
    for (auto &val : s)
        cout << val << " ";

    cout << "\n";
}
*/

void print(multiset<string> &s)
{
    // set<string>::iterator == auto
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << "\n";
}

int main()
{
    /*
        set<string> strSet;
        strSet.insert("zaid");
        strSet.insert("mostafa");
        strSet.insert("mostafa");
        strSet.insert("mostafa");
        strSet.insert("ahmed");

        print(strSet); // ahmed mostafa zaid

        // set<string>::iterator it = strSet.find("mostafa");
        auto it = strSet.find("mostafa"); // shorter way
        if (it != strSet.end())
            strSet.erase(it);

        print(strSet); // ahmed zaid
    */
    multiset<string> strMSet;
    strMSet.insert("kamal");
    strMSet.insert("ahmed");
    strMSet.insert("ahmed");
    strMSet.insert("ahmed");
    strMSet.insert("hussin");

    print(strMSet); //  ahmed ahmed ahmed hussin kamal

    cout << strMSet.count("ahmed") << "\n"; // 3

    // if (strSet.count("mostafa"))
    //     cout << "YES\n";

    // multiset<string>::iterator it = strSet.find("ahmed");
    auto it = strMSet.find("ahmed"); // for shorter code
    if (it != strMSet.end())         // return end if not found
        strMSet.erase(it);

    print(strMSet); //  ahmed ahmed hussin kamal

    return 0;
}
