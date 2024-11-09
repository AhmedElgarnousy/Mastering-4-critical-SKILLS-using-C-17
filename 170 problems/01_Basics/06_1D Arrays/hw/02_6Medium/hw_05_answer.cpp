#include <iostream>

using namespace std;

/*********************************************************************************
* 		   Medium: Problem #5: Unique Numbers of an Unordered List               *
/********************************************************************************/

    /*
	Section: 1D_Array.
	Problem #5: Unique Numbers of unordered list 
	Description: print the unique list of the numbers, but preserve the given order
	- input: 13      1 5 5 2 5 7 2 3 3 3 5 2 7
	- output: 13      1 5 2 7 3 
		- obersve: the input not necessrily a sorted list
		- obersve: the output preserves the original order. i.e. 5 appears before 2 i this istance
	- Don't use nested loops
	Level: Medium Challenge
	*/
int main()
{
	int N;
	cout<<"Enter array fake size: ";
	cin>>N;

	int arr[20];
	int unique_list[20]={0};
    int list_size = 0;


	cout<<"Enter array values: ";
	for(int i = 0; i < N; i++)
		cin>>arr[i];

	for(int i = 0;  i< N; i++)
	{
		for(int j = 0; j < list_size + 1 ;j++ )
		{
				if(arr[i] != unique_list[j] )
				{
					if(j == list_size)
					{
						cout<<arr[i]<<" added to unique list\n";
						unique_list[list_size] = arr[i];
						list_size++;
						break;
					}
				}
				else
				{
					break;
				}
		}
	}	

	for(int i = 0; i < list_size; i++)
		cout<<unique_list[i]<<" ";
	cout<<"\n";

	

    return 0;
}