//============================================================================
// Name        : CppLoops.cpp
// Author      : Ahmed Kamal Hussein
// Version     :
// Copyright   : Your copyright notice
// Description : CppLoops in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


/***********************************************************************
*                  Loops(While, For) Homework                                      *
/***********************************************************************/

												/*While Loop*/

/***********************************************************************
*                  Easy: Problem #1: Print Range                         *
/***********************************************************************/
/***********************************************************************
*                  Easy: Problem #2: Line Of Characters                    *
/**********************************************************************/
/***********************************************************************
*                  Easy: Problem #3: Print left angled triangle               *
/**********************************************************************/
/***********************************************************************
*                  Easy: Problem #4: Print face down left angled triangle                 *
/**********************************************************************/
/***********************************************************************
*                  Easy: Problem #5: Special Average                *
/**********************************************************************/


/***********************************************************************
*                  Medium: Problem #1: Print Diamond          *
/**********************************************************************/
/***********************************************************************
*                  Medium: Problem #2:  Special Multiples 1           *
/**********************************************************************/
/***********************************************************************
*                  Medium: Problem #3: Special Multiples 2          *
/**********************************************************************/
/***********************************************************************
*                  Medium: Problem #4: Minimum of Values           *
/**********************************************************************/


/***********************************************************************
*                  Hard: Problem #1: Find NOs                          *
/**********************************************************************/
/***********************************************************************
*                  Hard: Problem #2: Reverse number                    *
/**********************************************************************/
/***********************************************************************
*                  Hard: Problem #4: Multiplication table              *
/**********************************************************************/
/***********************************************************************
*                  Hard: Problem #4:  Special Sum                      *
/**********************************************************************/


                                  /*For Loop*/

/***********************************************************************
*                  Medium: Problem #1: Find Special Pairs              *
/**********************************************************************/
/***********************************************************************
*                  Medium: Problem #2: I Find All Quadruples           *
/**********************************************************************/
/***********************************************************************
*                  Medium: Problem #4: Is it Prime?                    *
/**********************************************************************/
/***********************************************************************
*                  Medium: Problem #4: Print Primes                    *
/**********************************************************************/


/***********************************************************************
*                  Hard: Problem #1: Printing X                        *
/**********************************************************************/
/***********************************************************************
*                  Hard: Problem #2: Special Sum                       *
/**********************************************************************/
/***********************************************************************
*                  Hard: Problem #4: Faster Triples                    *
/**********************************************************************/
/***********************************************************************
*                  Hard: Problem #4: Digit Sum in a Range              *
/**********************************************************************/




int main() {

	/*
	Section: Loops.
	Description: Problem #1: Print Range
	Given a starting number X and an ending number Y, print all numbers 
	between X and Y inclusive, each on a line.
	Level: Easy Challenge
	*/

	/*
	Section: Loops.
	Description: Problem #2:: Line Of Characters
	Input: Read an integer N followed by a single character
		 Output: Print the character N times as below
	Level: Easy Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #3: Print left angled triangle
	Read integer N, then print a left angled triangle that has N rows as below
	Level: Easy Challenge
	*/

	/*
	Section: Loops.
	Description: Problem #4: Print face down left angled triangle
	Read integer N, then print a face down left angled triangle that has N rows.
	Level: Easy Challenge
	*/

	/*
	Section: Loops.
	Description: Problem #5: Special Average
	Read integer N, followed by reading N numbers. Print 2 values
	 The average of the numbers in odd positions (1st, 3rd, 5th, …)
 	The average of the numbers in even positions (2nd, 4th, 6th, …)
	Level: Easy Challenge
	*/



	
	/*
	Section: Loops.
	Description: Problem #1: Print diamond
	Read an integer N, then print diamond of 2N rows as below
	Level: Medium Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #2: Special multiples 1
	Read an integer N : print all numbers that satisfy the following property
		Either number is divisible by 8
		Or divisible by both 4 and 3
	Level: Medium Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #3: Special multiples 2
	Read an integer N (1 <= 30): Print the first N numbers that are 
	 multiple of 3 but not multiple of 4
	Level: Medium Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #4: Minimum of values
	Input: Read integer T for a number of test cases. 
	For each test case read integer N followed by reading N integers. 
	Output: For each test case, print the minimum of the N integers
	Level: Medium Challenge
	*/

	/*
	Section: Loops.
	Description: Problem #1: Find NOs
	Read integer N, then read N strings. 
	Print only the strings (of 2 letters). 
	These 2 letters must be letter 'N' and letter 'O' 
		. Regardless of lower or upper case
		. Regardless of the 2 letters order
		. E.g. print "No", "ON", "no" but ignore e.g. "YEs", "Noooo"
		. That is: a word of 2 letters only N and O
	Level: Hard Challenge
	*/

	/*
	Section: Loops.
	Description: Problem #2: Reverse number
	Read an integer N, then find its reverse integer R
	 	Print R R*3
	 input ⇒ Output
	 	123 ⇒ 321 963
	Level: Hard Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #3: Multiplication table
	Read an integer N and M, then print NxM lines for their multiplication table.
	Level: Hard Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #4: Special Sum
	Read integer T for number of test cases. 
	 For each test case read integer N. Then read N integers a, b, c
	 Output: Compute the sum of the following expression:
	 a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
	 That is the k-th number is repeated k times
	Level: Hard Challenge
	*/

	/*
	Section: Loops.
	Description: Problem #1: Printing X
	Read an Integer N, then print an X using * as following
	 N always odd
	Level: Medium to hard Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #2: Find Special Pairs
	Count How many X, Y numbers such that
	 X in range [50-300]
	 Y in range [70-400]
	 X < Y
	 (X+Y) divisible by 7
	Level: Medium to hard Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #3: Find all quadruples
	Count how many (a, b, c, d) with following property:
	 	1 <= a, b, c, d <= 200
	 	a + b = c + d
	 Code it once using 4 loops 
	 	How much time does it take!
	 Code it once using 3 loops only
	 Future: With hash tables, you can do it using 2 loops only

	Level: Medium to hard Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #4: Is Prime?
	Read an integer N (< 500) and print YES if it is prime, otherwise NO
	A prime number is greater than 1 AND cannot be formed by multiplying two smaller numbers. 
		In other words, number%whatever != 0
		The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
	Level: Medium to hard Challenge
	*/


	
	/*
	Section: Loops.
	Description: Problem #5: Print Primes
	Level: Medium to hard Challenge
	*/


	/*
	Section: Loops.
	Description: Problem #: Digits sum in range
	Level: Medium to hard Challenge
	*/




	return 0;
}
