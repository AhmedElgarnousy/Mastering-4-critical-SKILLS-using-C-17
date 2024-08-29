#include <iostream>
#include <set>

using namespace std;

/*
void print(set<string> &s)
{
    for(auto &val: s)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
}
*/
void print(multiset<string> &s)
{
    for(set<string>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}

int main()
{
    
    multiset<string> strSet;
    strSet.insert("kamal");
    strSet.insert("ahmed");
    strSet.insert("aahmed");
    strSet.insert("ahmed");
    strSet.insert("mostafa");

    print(strSet);

    if(strSet.count("mostafa"))
        cout<<"YES\n";

    multiset<string>::iterator it = strSet.find("ahmed");
    // auto it = strSet.find("ahmed");  // for shorter code

    if(it != strSet.end()) // return end if not found
    {
        strSet.erase(it);
    }
    print(strSet);



    return 0;
}
