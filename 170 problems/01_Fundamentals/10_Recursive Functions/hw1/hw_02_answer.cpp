#include<iostream>

using namespace std;

/*************************************************
 * 			Homework 2: Power Function           *
/************************************************/
int my_pow(int value, int p=2)
{
    if(0 == p)
        return 1;

    return my_pow(value, p - 1)* value;
}


int main()
{
    cout<<my_pow(7, 1)<<"\n";
    return 0;
}

