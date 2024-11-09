#include <iostream>

using namespace std;

/*********************************************************************************
* 				 Medium: Problem #3: Find the Most Frequent Number               *
/********************************************************************************/

    /*
	Section: 1D_Array.
	Description: Problem #3: Find most frequent number
	Level: Medium Challenge
	*/

int main()
{
	int N ;
    cout<<"Enter fake array size: ";
    cin>>N;

    int arr[10];
    int freq_arr[10]{};  // array contain the freq of each element

   // fill the array 
   for(int i = 0; i< N; i++)
        cin>>arr[i];

	// get the freq of each element by nested loop
	for(int i = 0; i < N; i++)
	{
		for(int j =0; j < N; j++)
		{
			if(arr[i] == arr[j])
				freq_arr[i]++;
		}
	}

	int max = -1;
	int maxIdx = 0;
	
	// get the most frequent number
	for(int i = 0; i < N; i++)
	{
		if(freq_arr[i] > max)
		{
			max = freq_arr[i];
			maxIdx = i;
		}
	}

	cout<<"most freq one: "<<arr[maxIdx]<<"\n";

    return 0;
}