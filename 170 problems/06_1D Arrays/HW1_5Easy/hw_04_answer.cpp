#include <iostream>

using namespace std;

/*********************************************************************************
* 						   Easy: Problem #4: Is it a Palindrome?                 *
/********************************************************************************/

    /*
	Section: 1D_Array.
	Description: Problem #4: Is Palindrome?
	Read an Integer N, then read N (<= 200) integers. 
     Print YES if the array is increasing. 
	Level: Easy Challenge
	*/

int main()
{
    int N;
    cin>>N;
    
    int arr[100];

    for(int i = 0 ; i< N; i++)
        cin>>arr[i];

    for(int i = 0 ; i< N; i++)
    {
        if(arr[i] != arr[--N]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}