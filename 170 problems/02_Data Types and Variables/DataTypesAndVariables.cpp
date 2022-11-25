//============================================================================
// Name        : CppDataTypesAndVariables.cpp
// Author      : Ahmed Kamal
// Version     : v01
// Copyright   : Your copyright notice
// Description : DataTypesAndVariables in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

int main(void) {

	/*
	Section: DataTypesAndVariables.cpp .
	Description: Problem #1: Math operations
		         Write a program that reads 2 numbers and print their + - * / as following .
	Level: Easy Challenge
	*/

	/*
	float num1, num2;
	cin>>num1 >> num2;

	//cout<<"sum is: "<<num1+ num2 << "\n"<<"subtract is: "<<num1 - num2  <<"\n"  <<"Division is: "<<num1 / num2 << "\n" <<"Multiplication is: "<<num1 * num2 << "\n";
	cout<< num1 << "+" << num2 << "=" <<num1+num2<<"\n"
        << num1 << "-" << num2 << "=" <<num1-num2<<"\n"
        << num1 << "/" << num2 << "=" <<num1/num2<<"\n"
        << num1 << "*" << num2 << "=" <<num1*num2;
	*/

	/*
	Section: DataTypesAndVariables.
	Description: Problem #2: Students grades
		         Write a program that reads 2 students information about math exam
                 Read per student: name, id and grade
                 Then print them. See the picture
	Level: Easy Challenge
	*/

	/*
	string name1 ;
	int id1 ;
	float grade1 ;

	string name2 ;
	int id2 ;
	float grade2 ;

	cout<<"what is student 1 name: ";
	cin>>name1;
	cout<<"His id: ";
	cin>>id1;
	cout<<"His math exam grade: ";
	cin>>grade1;

	cout<<"what is student 2 name: ";
	cin>>name2;
	cout<<"His id: ";
	cin>>id2;
	cout<<"His math exam grade: ";
	cin>>grade2;

	cout<<endl;

	cout<<"Students grades in math\n"
			<<name1<<"(with id "<<id1<<")"
			<<" got grade: "
			<<grade1<<"\n";

	cout<<"Students grades in math\n"
			<<name2<<"(with id "<<id2<<")"
			<<" got grade: "
			<<grade2<<"\n";
	cout<<"Average grade is: "<<(grade1 + grade2)/2;
	*/

	/*
	Section: DataTypesAndVariables.
	Description: Problem #3: Even and Odd sum
		         Given 8 space-separated integers, find the sum of those in even places and
				 the sum of those in odd places.
 	 	 	 	 Note: Even place means the 2nd, 4th, 6th or 8th numbers,
 	 	 	 	 odd places are the 1st, 3rd, 5th and 7th numbers.
 	 	 	 	 Note: the 8 numbers will be on the same line
 	 	 	 	 Note: Don’t print any welcome or by messages.
	Level: Easy Challenge
	*/
	/*
	int n1,n2,n3,n4,n5,n6,n7,n8;
    cin >>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8;
    cout<<n2 +n4 + n6 + n8 << " "<< n1 + n3 +n5 +n7;
	*/

    /*
    Section: DataTypesAndVariables.cpp .
    Description: Problem #1: Guess Program Output
    Level: Medium Challenge
    */

	/*
	int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3 <<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout<<num3<<"\n";
	*/

    /*
    Section:     DataTypesAndVariables.cpp .
    Description: Problem #2: Swapping 2 numbers!
    Level:       Medium Challenge
    */
	/*
	int num1 , num2;
	int swap_var;
	cin >>num1>>num2;

	swap_var = num1;
	num1 = num2;
	num2 = swap_var;

	cout<<num1<<" "<<num2<<endl;
	*/

	/*
    Section: 	DataTypesAndVariables.cpp .
    Description:Problem #1: Swapping 3 numbers
				Write a code to swap 3 numbers
				 Let say we have numbers a = 115, b = 20, c = 301
				 We wanna their final values to be: a = 20, b = 301, c = 115
				 Challenge: Do it in 4 lines 

    Level: 		Hard Challenge
    */

	/*
    Section: DataTypesAndVariables.cpp .
    Description:Problem #2: Print Me
				Write a program that reads 2 integers A, B
				 B is either -1 or 1
				 If -1, print 2*A+1
				 If 1, print A*A
				 Hint
				 You need to think in a simple 1 line formula for the output 

    Level: Hard Challenge
    */

	/*
    Section: DataTypesAndVariables.cpp .
    Description: Problem #3: Sum numbers from 1 to N
				Write a program that reads integer N and Print the sum from 1 to N
			    E.g. If input N = 5, then Output is: 15
			    Why? As 1+2+3+4+5 = 15
			    Below table of more values
			    3 ⇒ 6 (1+2+3)
			    4 ⇒ 10 (1+2+3+4)
			    5 ⇒ 15 (1+2+3+4+5)
			    You need to find a simple 1 line formula to solve the problem :) 
			    Hint: Let N = 8. Write numbers from 1 to 8
			    What is the sum of 1st and 8th number? sum of 2nd and 7th? And so on
			    Your formula should be good for even and odd N. Be careful programmer!
			    What is the maximum N after it overflow occurs? Recall int max is 2147483647

    Level: Hard Challenge
    */
	

	return 0;
}

