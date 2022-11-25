//============================================================================
// Name        : CppOperators.cpp
// Author      : Ahmed Kamal
// Version     : v01
// Copyright   : Your copyright notice
// Description : Operators in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*
		Section: Operators.
		Description: Problem #1: Guess Program Output
		Level: Easy Challenge

		int a = 0, b = 1;

		cout<<a++<<"\n";  //0 then 1
		cout<<++a<<"\n";  //2
		a += 2*b+1;     //5
		b = ++a * 2;    //6*2=12
		cout<<a<<" "<<b<<"\n";  // 6 12

		b = a;    //6
		a = 12 + a / 3 / 2 - 2 * 2;   //9
		cout<<a<<"\n";      //9

		a = b;       //6
		a = ((12 + a) / 3 / 2 - 2) * 2; //2
		cout<<a<<"\n";

	 */


	/*
		Section: Operators.
		Description: Problem #2: Guess Program Output
		Level: Easy Challenge

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c, //2  1  2
		   c = a+b, a = b, b = c, //3  2  3
		   c = a+b, a = b, b = c, //5  3  5
		   c = a+b, a = b, b = c) <<endl; //8 5 8  out= 8 ,comma operator just print the last result
	*/

	/*
		Section: Operators.
		Description: Problem #3: Guess Program Output
		Level: Easy Challenge

	int a = 210;

		a /= 2;
		cout<<a<<"\n";  //105

		cout<<(a /= 3)<<"\n";  //35
		cout<<(a /= 5)<<"\n";  //7
		cout<<(a /= 7)<<"\n";   //1

		cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";  //1

		a = 10;
		cout<<a++ + 10<<"\n";  //20.
		cout<<++a + 10<<"\n";  //22
		cout<<a-- + 10<<"\n";  //22.
		cout<<--a + 10<<"\n";  //20

		int b = 20;
		cout<<a++ + ++b<<"\n";	// Don't code this way //  10 + 21 = 31

		cout<<a<<"\n"; //11
		++a+=10;	// Don't code this way
		cout<<a<<"\n"; //22
	*/





	/*
	    Section: Operators.
	    Description: Problem #1: Averages
	    Write a program that reads 5 numbers and print the following:
 	 	 	 A) Their average
 	 	 	 B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
 	 	 	 C) The average of the first 3 numbers divided by the average of the last 2 numbers.
 	 	 	 What is the math relation between B and C?
 	 	Input 1 2 3 4 5
 	 	 	 3
 	 	 	 0.666666667
 	 	 	 0.444444444
	    Level: Easy Challenge


	float num1,num2, num3, num4, num5;
	float B_req, C_req;
	cout<<"Enter 5 numbers: ";
	cin>>num1>>num2>>num3>>num4>>num5;

	cout<<"Their Average is: "<< (num1 + num2 + num3 + num4 + num5)/5<<"\n";
	cout<<(B_req=(num1 + num2 + num3) / (num4 + num5)) <<"\n";

	cout<<(C_req=((num1 + num2 + num3)/3.0) / ((num4 + num5)/2.0)) <<"\n";
	 */

	/*
		 Section: Operators.
		 Description: Problem #2: Fractional Part
		 Write a program that reads 2 numbers a, b and divides them (a/b), but prints
		  only the fraction part
	 	 Input 201 25
	 	 Output: 0.04
	 	 	 Notice: 201 / 25 = 8.04
	 	 	 We only want the fraction part: 0.04
		 Level: Medium Challenge


	int num1 , num2;
	double fractional , remainder;
	cout<<"Enter 2 Numbers: ";
	cin>>num1>>num2;
	remainder = num1 % num2;
	fractional = remainder/num2;
	cout<<fractional;
	*/

	/*
		 Section: Operators.
		 Description: Problem #3: Our remainder
		 We know N % M computes the remainder of division
		 Write a program that reads 2 positive integers and print such reminder without
			using the modulus operator %
	     Input: 27 12
		 Output: 3
			 Remember in math: 27 % 12 = 3
		 Level: Medium Challenge

	int num1 , num2;
	cout<<"Enter 2 numbers: ";
	cin >>num1>>num2;
	//27 % 12 = 3
	//27 /12 = 2.25   24/2
	cout<< "Remainder is: "<<num1 - (num2 * (num1/num2));
	*/


	/*
		 Section: Operators.
		 Description: Problem #1: Is even?
		 The following code reads an integer and computes
			a boolean if the number is even in 3 different ways.
		 Fill in the is_even to solve the problem in 3 ways as
			following
		 Using only %2
		 Using only /2
		 Using only %10
		 Level: Medium Challenge

	int num;
	cout<<"Enter a number: ";
	cin>>num;

	// 	Is even using %2
	bool is_even1 = (num % 2 == 0) ;
	cout<<(is_even1)<<endl;
	// 	Is even using /2
	double fractionl = (num/2.0) -(num/2);

	bool is_even2 = fractionl == 0;
	cout<<(is_even2)<<endl;


	// 	Is even using %10
	int last_digit = num%10;
	bool is_even3 = (last_digit == 0  || last_digit ==  2 || last_digit ==  4 || last_digit ==  6 || last_digit == 8);
	cout<<(is_even3)<<endl;
	 */


	/*
		 Section: Operators.
		 Description: Problem #2: Last 3 digits sum
		 Write a program that reads an integer and prints the sum of its last 3 digits.
 	 	 	 Inputs -> Outputs examples
 	 	 	 15 -> 6
 	 	 	 125 -> 8
 	 	 	 1000 -> 0
 	 	 	 1001 -> 1
 	 	 	 1234 -> 9
 	 	 	 99999 -> 27
		 Level: Medium Challenge
	*/



	/*
		 Section: Operators.
		 Description: Problem #3: 4th digits from the end
		 Write a program that reads an integer and print the 4th from the right side. If
			no such digit, print 0
		 Inputs => outputs
		 15 => 0
		 125 => 0
		 1000 => 1
		 5001 => 5
		 1234 => 1
		 654321 => 4
		 99999 => 9
		 Level: Medium Challenge
	*/


	/*
	 Section: Operators
	 Description:Problem #1: 100 or 7?
		Write a program that reads an integer and print 100 if number is even or 7 if
		number is odd
		 E.g. for input 8 -> 100
		 E.g. for input 133 -> 7
	 Level: Hard Challenge
	 */


	/*
	 Section: Operators
	 Description:Problem #1: 100 or 7?
		Assume a year is 12 months, but each month is 30 days
 	 	 That is a year has 12 * 30 = 360 days
 	 	 Read an integer: whole number of days of someone age. Print 3 numbers
 	 	 Total years total months remaining days
 	 	 Inputs -> Outputs
 	 	 360 1 0 0 each 360 days a year
 	 	 30 0 1 0 each 30 days a month
 	 	 10 0 0 10 just days infant!
 	 	 391 1 1 1 391 = 360 + 30 + 1 = 1 year, 1 month, 1 day
 	 	 61 0 2 1 61 = 2*30 + 1
 	 	 200 0 6 20 200 = 30*6 + 20
 	 	 1000 2 9 10 1000 = 2*360 + 9*30 + 10
 	 	 5000 13 10 20
	 Level: Hard Challenge
	 */


	return 0;
}
