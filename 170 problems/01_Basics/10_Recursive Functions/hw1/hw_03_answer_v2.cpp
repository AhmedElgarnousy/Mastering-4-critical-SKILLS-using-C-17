#include<iostream>

using namespace std;

/*************************************************
* 			Homework 3: Array maximum            *
/************************************************/

int arr_max(int arr[], int len)
{
    int size = len-1, i = 0; 

    // base case 
    if(len == 2)
    {
        if(arr[size] >arr[size-1])
            return arr[size];
        else    
            return arr[size-1];
    }

    if(arr[len-1] > arr_max(arr, len-1))
        return arr[len-1];
    else    
        return arr_max(arr, len-1);
}

int main()
{
    int arr1[] = {1,80,2,10,3};
    cout<<arr_max(arr1, 5)<<"\n";

    return 0;
}

