#include <iostream>

using namespace std;

/*********************************************************************************
* 			Easy: Problem #3: Unique Numbers of an Ordered List                  *
/********************************************************************************/
    /*
	Section: 1D_Array.
	Description: Problem #3: Unique Numbers of ordered list 
	Level: Easy Challenge
	*/

int main()
{
    int N;
    cin>>N;

    int arr[100];
    int orderdList[100];
    int cnt = 0;
    
    for(int i = 0; i < N; i++)
        cin>>arr[i];    

    for(int i = 0; i < N; i++)
    {
        for(int j = i; j< N; j++)
        {
            if(arr[i] != arr[j+1])
            {
                orderdList[cnt++] = arr[i];
                i= j; // so it will increase by first loop
                break;
            }
        }
    }
    for(int i = 0; i < cnt; i++)
        cout<<orderdList[i]<<" ";

    cout<<"\n";

    return 0;
}