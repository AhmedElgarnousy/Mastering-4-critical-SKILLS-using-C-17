#include<iostream>

using namespace std;

/*************************************************
 * 		 Homework 7: Array Accumulation          *
/************************************************/


// try to do it with void not int
//void accumulate_arr(int arr[], int len){
//}

int accumulate_arr(int arr[], int len)
{
    if(len ==  0)
        return 0;
    
    arr[len] += accumulate_arr(arr, len -1);
}

int main()
{
   // int arr[6] {1, 2, 3, 4, 5, 6};
    int arr[6] {1, 8, 2, 10, 3, 1};
    accumulate_arr(arr, 5);
    
    for(int i = 0; i<6; i++)
        cout<<arr[i]<<" ";

    cout<<"\n";
    return 0;
}

