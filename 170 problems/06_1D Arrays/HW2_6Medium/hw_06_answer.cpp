#include <iostream>

using namespace std;

/*********************************************************************************
* 		   Medium: Problem #6: Sorting Numbers          *
/********************************************************************************/

    /*
	Section: 1D_Array.
    Problem #6: Sorting Numbers 
	Description: 
	- Read in non-negative integer N(<= 900), 
	followed by N integers (0<=value<=500)
	- print out the numbers, completely sorted from small to large
	- Input: 13     1 5 5 2 5 7 2 3 3 3 5 2 7 
	- Output: 1 2 2 2 3 3 3 5 5 5 5 7 7 
	- Give it your best attempt, and try to be efficient with your code
		- you don't need to google how to sort numbers
		- hint: maximum value in the array is 500

	Level: Medium Challenge
	*/


int main()
{
	int N;
	cout<<"Enter array fake size: ";
	cin>>N;

	int arr[100];
	cout<<"Enter array values: ";
	for(int i = 0; i < N; i++)
		cin>>arr[i];

	int swap;

	for(int j = 0; j < N; j++)   // time O(n^2)
	{	
		for(int i = 0; i < N; i++)
		{
			if(arr[i] > arr[i+1])
			{
				swap = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = swap;
			}
		}
	}

	for(int i = 0; i < N; i++)
		cout<<arr[i]<<" ";
	
	cout<<"\n"
		;
    return 0;
}