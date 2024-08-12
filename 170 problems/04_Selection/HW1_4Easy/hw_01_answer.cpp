#include <iostream>

using namespace std;

// utlities

bool isEven(int num){
	return num%2 == 0;
}

bool isOdd(int num){
	return num%2 != 0;
}

int myMax(int num1, int num2){
	if(num1 > num2)
		return num1;
	return num2;
}


int main()
{
	/*
	Section: Selection.
	Description: Problem #1: Arithmetic
	Read 2 integers A, B and print based on following cases:
 	 if both are odd print their product A*B
 	 if both are even print their division A/B (assume B != 0)
 	 if the first is odd and the second is even then find their sum A+B
 	 if the first is even and the second is odd then find their subtraction A-B
	Level: Easy Challenge
	*/

	int num1, num2;
	cin>>num1>>num2;
	//cout<<num1<< " "<<num2;


	// both odd
	if(isOdd(num1) && isOdd(num2))
		cout<<"product is "<<num1* num2<<"\n";
	// both even
	if(isEven(num1) && isEven(num2))
		cout<<"Division is "<<num1 / num2<<"\n";
	// odd , even
	if(isOdd(num1) && isEven(num2))
		cout<<"Addition is "<<num1 + num2<<"\n";
	// even, odd
	if(isEven(num1) && isOdd(num2))
		cout<<"Subtraction is "<<num1 - num2<<"\n";
    return 0;
}