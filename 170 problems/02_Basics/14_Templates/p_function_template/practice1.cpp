#include <iostream>

using namespace std;


// overloading functions problems
// is the motivation to templates in cpp

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

double max(double a, double b)
{
    if(a > b)
        return a;
    return b;
}

int main()
{
    cout<<max(2.5, 29.0)<<"\n";
    cout<<max(5, 2)<<"\n";


    return 0;
}