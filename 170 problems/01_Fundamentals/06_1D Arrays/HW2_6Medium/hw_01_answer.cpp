#include <iostream>

using namespace std;


/*********************************************************************************
* 			     Medium: Problem #1: Find the Three Minimum Values               *
/********************************************************************************/
    
	/*
	Section: 1D_Array.
    Problem #1: Find the 3 minimum values
	Description: 
        - Don't change the array content
        - Don't iterate on the array more than once
        - Make sure they're printed in order, from the smallest to largest

	Level: Medium Challenge
	*/

int main()
{
    int N ;
    cout<<"Enter fake array size >= 3:";
    cin>>N;

    int arr[100];

   for(int i = 0; i< N; i++)
        cin>>arr[i];

  // for(int i = 0; i< N; i++)
  //     cout<<arr[i]<<" ";
    
    cout<<"\n";


    int min1= INT32_MAX, min2 = INT16_MAX, min3= INT8_MAX;

    for(int i = 0; i< N; i++)
    {
        if(arr[i] < arr[i+1] && arr[i+1] < arr[i+2] ) // 1 2 3
            {
              min1 = arr[i], min2 = arr[i+1], min3 = arr[i+2];
              break;  
            }
        
        else if(arr[i] < arr[i+1] && arr[i+1] > arr[i+2] )
        {
            if(arr[i] > arr[i+2])
            {
                min1 = arr[i+2], min2 = arr[i],  min3 =arr[i+1];  //  2 3 1
                break;
            }
            else {
                min1 = arr[i], min2 = arr[i+2],  min3 =arr[i+1];  // 1 3 2 
                break;
            }
        }
        
        else if(arr[i] > arr[i+1] && arr[i+1] < arr[i+2] )
        {
            if(arr[i] > arr[i+2])
            {
                min1 = arr[i+1], min2 = arr[i+2], min3 = arr[i];   // 3 1 2 
                break;
            }
            else
            {
                min1 = arr[i+1], min2 = arr[i],  min3 = arr[i+2]; // 2 1 3 
                break;
            } 
        }

        else if(arr[i] > arr[i+1] && arr[i+1] > arr[i+2] ) // 3 2 1
            {
                min1 = arr[i+2], min2 = arr[i+1],  min3 = arr[i];  
                break;
            }

    }

    cout<<"after sorted: "<<min1<< " "<<min2<<" "<<min3<<"\n";
    
    return 0;
}