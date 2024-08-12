#include<iostream>

using namespace std;

/*************************************************
* 		      Homework 8: Left-Max               *
/************************************************/


/*
Error Bug

*** stack smashing detected ***: terminated
Aborted (core dumped)
*/
void left_max(int arr[], int len)
{
    if(len ==1)
        return;

    left_max(arr, len -1);
    
    if(arr[len -1] > arr[len ])
        arr[len] = arr[len-1];

}

int main()
{
    int arr[6] {1, 3, 5, 7, 4, 2};
    left_max(arr, 6);
    
   for(int i = 0; i < 6; i++)
        cout<<arr[i]<<" ";

    return 0;
}

