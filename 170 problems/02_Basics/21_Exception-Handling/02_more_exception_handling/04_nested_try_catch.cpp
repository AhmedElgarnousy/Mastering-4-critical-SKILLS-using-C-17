#include <iostream>

using namespace std;


int main()
{
    try
    {
        try
        {
            throw 17;
        }
        catch(int n)
        {
            cout<<"oh exception\n";
        }
    }
    catch(int n)
    {
        cout<<"got it\n";
    }

    return 0;
}