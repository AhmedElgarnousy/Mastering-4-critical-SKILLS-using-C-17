#include <iostream>

using namespace std;
	/*
	Section: Selection.
	Description: Problem #2: Sort 3 numbers
	Given 3 integers, sort (order) them in ascending order and print them .
	Level: Easy Challenge
	*/
int main()
{
    // assume that different values
	int num1, num2, num3;
	cin>>num1>>num2>>num3;

	if(num1<num2 && num2 < num3)
		cout<<num1<<" "<<num2<<" "<<num3<<"\n";
	if(num1>num2 && num2 > num3)
		cout<<num3<<" "<<num2<<" "<<num1<<"\n";

	if(num1<num2 && num2 > num3 && num1<num3)
		cout<<num1<<" "<<num3<<" "<<num2<<"\n";
	if(num1<num2 && num2 > num3 && num1>num3)
		cout<<num3<<" "<<num1<<" "<<num2<<"\n";

	if(num1>num2 && num2 < num3 && num1<num3)
		cout<<num2<<" "<<num1<<" "<<num3<<"\n";
	if(num1>num2 && num2 < num3 && num1>num3)
		cout<<num2<<" "<<num3<<" "<<num1<<"\n";
    return 0;
}