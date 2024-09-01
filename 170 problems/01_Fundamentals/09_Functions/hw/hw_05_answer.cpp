#include <iostream>

using namespace std;

/**************************************************
 * 			 Homework 5: Set-powers               *
/*************************************************/

void set_powers(int arr[], int len=5, int m=2)
{
    arr[0] = 1;
    for(int i = 1; i < len; i++)
        arr[i] = arr[i-1]*m;

    for(int i = 0; i < len; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int arrLen;
    int array[10];
    cin>>arrLen;

    // arr, power -1, number
    set_powers(array, arrLen, 9);

    return 0;
}