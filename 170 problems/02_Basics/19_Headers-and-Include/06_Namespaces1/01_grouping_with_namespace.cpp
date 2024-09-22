#include<iostream>

using namespace std;

// Global Scope. Can't declare twice 
int total_users = 0;

namespace OurSystem
{
    // visible globally only within OurSystem
    int total_users = 10;
    
    // Define ALL of your system with such namespace 
}

namespace DownloadedSystem
{
    int total_users = 20; // CE
}

namespace OurSystem
{
    // int total_users = 10; // CE
    int SIZE = 10;
}

int main()
{
    cout<<total_users<< endl;
    cout<<OurSystem::total_users<< endl;
    cout<<DownloadedSystem::total_users<< endl;
    cout<<OurSystem::SIZE<<"\n";
    return 0;
}