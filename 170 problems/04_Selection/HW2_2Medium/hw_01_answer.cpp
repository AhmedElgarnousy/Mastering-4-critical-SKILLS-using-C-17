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

/**************************************************************
*         Medium: Problem #1: Find the Maximum of 10          *
/*************************************************************/
    /*
	Section: Selection.
	Description: Problem #1: Find Maximum of 10
	Find Maximum of 10
	Level: Medium Challenge
	*/

int main()
{
	int num , max = 0;

		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);
		cin>>num; max = myMax(num, max);

/*
// sol with for loop
	cout<<"max num is: "<<max<<"\n";	
	int num , max = 0;
	for(int i = 0; i < 10; i++){
		cin>>num;
		max = myMax(num, max);
	}
	cout<<"max num is: "<<max<<"\n";
*/
    return 0;
}