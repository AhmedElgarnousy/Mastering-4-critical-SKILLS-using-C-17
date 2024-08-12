#include <iostream>

using namespace std;

/*************************************************
 * 		  Homework 4: Is Palindrome Array        *
/************************************************/
bool IsPalindrome(int arr[], int arrSize)
{
 for(int i = 0 ; i< arrSize; i++)
    {
        if(arr[i] != arr[--arrSize])
            return 0;
    }
    return 1;
}
int main()
{
    int arrSize;
    cin>>arrSize;
    int arr[10];

    // fill the arr
    for(int i = 0 ; i< arrSize; i++)
        cin>>arr[i];

    cout<<IsPalindrome(arr, arrSize)<<"\n";
   
    return 0;
}