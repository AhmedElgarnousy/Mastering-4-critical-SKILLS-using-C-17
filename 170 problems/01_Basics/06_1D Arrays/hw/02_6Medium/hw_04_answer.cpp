#include <iostream>

using namespace std;

/*********************************************************************************
* 							   Medium: Problem #4: Digit Frequency               *
/********************************************************************************/

    /*
	Section: 1D_Array.
	Description: Problem #4: Digits frequency
	Level: Medium Challenge
	*/

int main()
{
	int N, digits = 0;
	cout<<"Enter array fake size: ";
	cin>>N;

	int arr[10];
	int digit, curNum;
	int digitAppears[10];

	// init the array by zero
	for(int i = 0; i <=9; i++)
		digitAppears[i] = 0;

	cout<<"Enter array values: ";
	for(int i = 0; i < N; i++)
		cin>>arr[i];

	for(int i = 0; i <= 9; i++)
	{
		// for on each number
		for(int j = 0; j < N; j++)
		{
			digits = 0;

			// get # of digits
			curNum = arr[j];
			while(curNum!= 0)
			{
				digits ++;
				curNum /= 10;
			}
			cout<<"org arr: "<<arr[j]<<" "<< digits<<"\n";

			// get each digit
			curNum = arr[j];
			for(int k = 0; k < digits; k++)
			{
				digit = curNum % 10;
				if (digit == i)
				{
					digitAppears[i] ++;
				}
				curNum /= 10;
			}
		}
	} 

	// print the result (digit - repeated times)
	for(int i = 0; i <= 9; i++)
		cout<<i<<" "<< digitAppears[i]<<"\n";
	
	/*
	*/
    return 0;
}