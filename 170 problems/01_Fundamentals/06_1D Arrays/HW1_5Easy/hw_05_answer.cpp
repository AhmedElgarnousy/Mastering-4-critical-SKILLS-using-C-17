#include <iostream>

using namespace std;



/*********************************************************************************
* 								 Easy: Problem #5: Smallest Pair                 *
/********************************************************************************/
    /*
	Section: 1D_Array.
	Description: Problem #5: Smallest pair
    print the smallest possible result of A[i] + A[j] + j - i, where i < j
    - 4   20 1 9 4     7
    THis is a tricky problem from testing perspective
	Level: Easy Challenge
	*/


int main()
{
    int N;
    cin>>N;
    
    int arr[100];

    // assume that no same values
    for(int i = 0 ; i< N; i++)
        cin>>arr[i];

    int min1 = INT8_MAX, idx1;
    int min2 = INT16_MAX, idx2;

    // get min1
    for(int i = 0 ; i< N; i++){
        if(arr[i] < min1){
            min1 = arr[i];
            idx1 = i;
        }
    }

    // get min2
    for(int i = 0 ; i< N; i++){
        if(arr[i]!= min1 && arr[i] < min2 ){
            min2 = arr[i];
            idx2 = i;
        }
    }

    // cout<<min1<<"\n";
    // cout<<min2<<"\n";
    
    // to handle this case:  i < j
    if(idx1 > idx2)
    {
        cout<<arr[idx1] + arr[idx2] + idx2 - idx1<<"\n";
    }
    else
    {
        cout<<arr[idx2] + arr[idx1]  + idx1 - idx2<<"\n";
    }

    
    // get the smallest 2 values
    return 0;
}