#include<iostream>

using namespace std;

/*************************************************
 * 			Homework 1: Length of 3n+1           *
/************************************************/

// 6 3 10 5 16 8 4 2 1
void length_3n_plus_1(int n)
{
    static int len = 0;
    len++;
    if(n == 1)
    {
        cout<<len<<"\n";
        return;
    }
    if(n %2 == 0)
        length_3n_plus_1(n/2);
    else
        length_3n_plus_1(3 * n + 1);
}

int main()
{

    length_3n_plus_1(6);
    return 0;
}

