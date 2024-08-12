#include<iostream>

using namespace std;

/*************************************************
* 			Homework 3: Array maximum            *
/************************************************/

int arr_max(int arr[], int len)
{
    len--;
    static int max = arr[len -1];
    int num = arr[len];

    if (len == -1)
        return max;
    
    if(max < num)
        max = num;
    
    return arr_max(arr, len );
}

int main()
{
    int arr1[5] {13, 8, 12, 7,3};
    int len = 5;

    cout<<arr_max(arr1, len)<<"\n";

    return 0;
}

