//============================================================================
// Name        : CppSelection.cpp
// Author      : Ahmed Kamal Hussein
// Version     :
// Copyright   : Your copyright notice
// Description : CppSelection in C++, Ansi-style
//============================================================================

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

/***********************************************************************
*                  Selection Homework                                      *
/***********************************************************************/


/***********************************************************************
*                  Easy: Problem #1: Arithmetic                         *
/***********************************************************************/


	/*
	Section: Selection.
	Description: Problem #1: Arithmetic
	Read 2 integers A, B and print based on following cases:
 	 if both are odd print their product A*B
 	 if both are even print their division A/B (assume B != 0)
 	 if the first is odd and the second is even then find their sum A+B
 	 if the first is even and the second is odd then find their subtraction A-B
	Level: Easy Challenge

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
	*/

/***********************************************************************
*                  Easy: Problem #2: Sort 3 Numbers                    *
/**********************************************************************/

	/*
	Section: Selection.
	Description: Problem #2: Sort 3 numbers
	Given 3 integers, sort (order) them in ascending order and print them .
	Level: Easy Challenge

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
	*/
	



/***********************************************************************
*                  Easy: Problem #3: Constrained Maximum               *
/**********************************************************************/

/*
	Section: Selection.
	Description: Problem #3: Maximum but constrained
	Given 3 integers, you have to find the biggest one of them which is < 100.
	Level: Easy Challenge


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
	*/

/***********************************************************************
*                  Easy: Problem #4: Conditional Count                 *
/**********************************************************************/
	/*
	Section: Selection.
	Description: Problem #4: Conditional Count
	Write a program that reads number X, then other 5 numbers. Print 2 values:
		How many numbers <= X
 		How many numbers > X
		Any relation between these 2 outputs?
	Level: Easy Challenge


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
	*/
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

/***********************************************************************
*                  Medium: Problem #1: Find the Maximum of 10          *
/**********************************************************************/
/*
	Section: Selection.
	Description: Problem #1: Find Maximum of 10
	Find Maximum of 10
	Level: Medium Challenge

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

	*/
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



/***********************************************************************
*                  Medium: Problem #2: Find Maximum up to 10           *
/**********************************************************************/
/*
	Section: Selection.
	Description: Problem #2: Find Maximum up to 10
	Read an integer N (2 <= N <= 10)
 	 Then read N integers, find which of them has the biggest value and print it.
	Level: Medium Challenge

	int N; // count
	cin>>N;

	int num;
	int max = 0;
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }
	if(N>0){ cin>>num; N--; if(num > max) max =  num; }

	cout<<"max is:"<<max<<"\n";
	*/

/***********************************************************************
*                  Hard: Problem #1: Intervals                         *
/**********************************************************************/
	/*
	Section: Selection.
	Description: Problem #1: Intervals
	Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
	Level: Hard Challenge
	int x;
	cin>>x;
	int s1, e1;
	cin>>s1>>e1;

	int s2, e2;
	cin>>s2>>e2;

	int s3, e3;
	cin>>s3>>e3;

	int exist_interval = 0;

	if(x >= s1 && x <= e1)
		exist_interval ++;
	if(x >= s2 && x <= e2)
		exist_interval ++;
	if(x >= s3 && x <= e3)
		exist_interval ++;

	cout<<exist_interval<<"\n";

	*/

/***********************************************************************
*                  Hard: Problem #2: Intersection of Two Intervals     *
/**********************************************************************/
	/*
	Section: Selection.
	Description: Problem #1: Two Intervals Intersection
	Read 4 numbers representing 2 intervals and print their intersection interval. If
	they don’t intersect, print -1
	Level: Hard Challenge
	int s1, e1;
	cin>>s1>>e1;

	int s2, e2;
	cin>>s2>>e2;

	if (s2 >= s1 && s2 <=e1)
		cout<<s2<<" "<<e1<<"\n";
	else
		cout<<-1<<"\n";
	*/


int main() {




	return 0;
}
