#include <iostream>

using namespace std;
/*********************************************************************************
*      				  Easy: Problem #1: Is the Array Increasing?                 *
/********************************************************************************/
    /*
	Section: 1D_Array.
	Description: Problem #1: increasing array?
	Read an Integer N, then read N (<= 200) integers. 
     Print YES if the array is increasing. 
	Level: Easy Challenge
	*/

int main()
{

    int N;
    cin>>N;
    int arr[100];

    for(int i = 0; i < N; i++)
        cin>>arr[i];

    for(int i = 0; i < N - 1; i++){
        if(arr[i+1] < arr[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    
    cout<<"YES\n";

    cout<<"\n";

    return 0;
}