#include <iostream>

using namespace std;

/*********************************************************************************
* 				   			    Easy: Problem #2: Replace MinMax                 *
/********************************************************************************/

    /*
	Section: 1D_Array.
	Description: Problem #2:Replace MinMax
	Read an integer N (< 200), then read N integers. 
     Assume all values [0, 2000]
     Print the array after doing the following operations:
     Find minimum number in these numbers.
     Find maximum number in these numbers.
     Replace each minimum number with maximum number and Vise Versa.
	Level: Easy Challenge
	*/

int main()
{
    int N;
    cin>>N;

    int arr[100];
    // fill the array
    for(int i = 0 ; i< N; i++)
        cin>>arr[i];

    int min = arr[0];
    int max = arr[0];

    // get the min and max values
    for(int i = 0 ; i< N; i++)
    {
        if(arr[i] < min)
            min = arr[i];
        
        if(arr[i] > max)
            max = arr[i];
    }
    cout<<"min is: "<<min<<" and max is: "<<max<<"\n";
    
    // replace the max with min and vice versa
    /*
    for(int i = 0 ; i< N; i++)
    {
        if(arr[i] == min){
            arr[i] = max;
            continue;
        }

        if(arr[i] == max)
        {
            arr[i] = min;
            continue;
        }
    */
    // replace the max with min and vice versa (another sol)
    for(int i = 0 ; i< N; i++)
    {
        if(arr[i] == min){
            arr[i] = max;
        }
        else if(arr[i] == max)
        {
            arr[i] = min;
        }
    }
    
    // print array after modifications
    for(int i = 0 ; i< N; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    
    return 0;
}