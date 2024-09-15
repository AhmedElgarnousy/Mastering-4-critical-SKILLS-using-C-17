#include <iostream>

using namespace std;
/*
	Section: Selection.
	Description: Problem #3: Maximum but constrained
	Given 3 integers, you have to find the biggest one of them which is < 100.
	Level: Easy Challenge
*/


// utlities
int myMax(int num1, int num2){
	if(num1 > num2)
		return num1;
	return num2;
}

int main()
{
	int num1, num2, num3;
	cin>>num1>>num2>>num3;

	if(num1>100 && num2 >=100 && num3>=100)
		cout<<-1<<"\n";

	if(num1<100 && num2 <100 && num3<100)
		cout<<myMax(myMax(num1, num2), num3)<<"\n";

	if(num1<100 && num2 >= 100 && num3>=100)
		cout<<num1<<"\n";
	if(num2<100 && num1 >= 100 && num3>=100)
		cout<<num2<<"\n";
	if(num3<100 && num2 >= 100 && num1>=100)
		cout<<num3<<"\n";


	if(num1 >= 100 && num2 < 100 && num3 <100)
		cout<<myMax(num2, num3)<<"\n";
	if(num2 >= 100 && num3 < 100 && num1 <100)
		cout<<myMax(num1, num3)<<"\n";
	if(num3 >= 100 && num2 < 100 && num1 <100)
		cout<<myMax(num2, num1)<<"\n";
    return 0;
}