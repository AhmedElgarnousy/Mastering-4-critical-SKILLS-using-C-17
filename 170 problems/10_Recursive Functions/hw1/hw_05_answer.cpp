#include<iostream>

using namespace std;

/*************************************************
 * 			Homework 5: Array average          *
/************************************************/
int arr_sum(int arr[], int len)
{
    int sum = arr[len -1];
    if(len == 1)
        return sum;
    
    return sum + arr_sum(arr, len -1);
}

double arr_avg(int arr[], int len)
{
    int sum = arr[len -1];
    if(len == 1)
        return sum;
    
    return double(sum + arr_sum(arr, len -1))/len;
}

/*
// another shape
double arr_avg(int arr[], int len){

    double sum = arr_sum(arr, len);
    return sum / len ;
}
*/

int main()
{
    int arr[5] {1, 8, 2, 10, 3};

    cout<<arr_avg(arr, 5)<<"\n";

    return 0;
}

