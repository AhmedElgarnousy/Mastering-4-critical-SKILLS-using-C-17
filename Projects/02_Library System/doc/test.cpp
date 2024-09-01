#include<iostream>

using namespace std;


int main()
{
    int num; 
    cin>>num;
    for(int i = 0; i <3; i++)
    {
        cout<<"i "<<i<<"\n";
        for(int j = 0; j <5; j++)
        {
            if(j == num)
            {
                break;
            }
            cout<<"j "<<j<<"\n";
        }
    }
    return 0;
}