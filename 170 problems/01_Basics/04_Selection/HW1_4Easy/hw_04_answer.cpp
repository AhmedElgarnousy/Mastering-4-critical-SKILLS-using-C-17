#include <iostream>

using namespace std;


	/*
	Section: Selection.
	Description: Problem #4: Conditional Count
	Write a program that reads number X, then other 5 numbers. Print 2 values:
		How many numbers <= X
 		How many numbers > X
		Any relation between these 2 outputs?
	Level: Easy Challenge
	*/

int main()
{
	int x, num1, num2, num3, num4, num5;
	int count = 0;
	cout<<"Enter x val: ";
	cin>>x;
	cout<<"Enter 5 values: ";
	cin>>num1>>num2>>num3>>num4>>num5;

	if(num1<= x)
		count++;
	if(num2<= x)
		count++;
	if(num3<= x)
		count++;
	if(num4<= x)
		count++;
	if(num5<= x)
		count++;

	cout<<"nums <=x is: "<<count<<"\n";
	cout<<"nums >x is: "<<5 - count<<"\n";
/*
// sol with array
	int x;
	int arr[5];
	int count = 0;

	cout<<"Enter x val: ";
	cin>>x;

	for(int i = 0; i< 5; i++){
		cout<<"Enter value number "<<i<<"\n";
		cin>>arr[i];
	}

	for(int i = 0 ; i <5; i++){
		if(arr[i]<= x)
			count++;
	} 

	cout<<"nums <=x is: "<<count<<"\n";
	cout<<"nums >x is: "<<5 - count<<"\n";
*/
    return 0;
}