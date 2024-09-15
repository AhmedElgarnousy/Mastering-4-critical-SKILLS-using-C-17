#include<iostream>

using namespace std;

/*************************************************
 * 			Homework 4: Array sum                *
/************************************************/

int arr_sum(int arr[], int len)
{
    int sum = arr[len -1];
    if(len == 1)
        return sum;
    
    return sum + arr_sum(arr, len -1);
}

int main()
{
    int arr[5] {10, 8, 2, 10, 3};

    cout<<arr_sum(arr, 5)<<"\n";

    return 0;
}

