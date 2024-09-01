//============================================================================
// Name        : Printing.cpp
// Author      : Ahmed Kamal Hussein
// Version     : v01
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

/*********************************************************************************
	 * 													Printing Homework                                  *
**********************************************************************************/

int main ()
{
/********************************************************************************
	 * 										Homework 1#: Guess the run-time output                  *
*********************************************************************************/
 cout<<"\n\n work smart not hard \n";


/********************************************************************************
* 								 Homework 2#: Write code to print the following               *
********************************************************************************/
	

  cout<<"*\n**\n***\n****\n*****";
  cout<<endl;

	cout<<"*"<<endl<< ""	;

	cout<<"    *\n" "   ***\n  *****\n *******\n*********";
  cout<<endl;

	cout<<"   *   "<<endl<<
		  	"  ***  "<<endl<<
		  	" ***** "<<endl<<
		  	"  ***  "<<endl<<
		  	"   *   ";
    cout<<endl;



    cout<<"    1\n" "   232\n""  34543\n"" 4567654\n""567898765\n";
    cout<<endl;

    cout<<"            1\n" "          1   1\n""        1   2   1\n""      1   3   3   1\n""    1  4   6   4    1\n""   1  5   10   10  5  1";
    cout<<endl;


/********************************************************************************
* 										 Homework #3: Find all errors and fix them                *
********************************************************************************/

	   cout<<"children must be taught how to think , not what to think ";
	   cout<<" we worry about what will become tomorrow, yet we forget that he is someone today \n";
	   cout<<" Children are not things to be molded < but are people to be unfolded\n";
	   cout<<" It is easier to build strong children than to repair broken men";
	   cout <<" children have never been very good at listening to their elders, but they have never failed to imitate them ";
	   cout<<"children are our most valuable resource\n";

	if (__cplusplus == 201703L){
		cout<< "c++17\n";
	}
	else if (__cplusplus == 201402L){
		cout<< "c++14\n";
	}
	else if (__cplusplus == 201103L){
		cout<< "c++11\n";
	}
	else if (__cplusplus == 199711L){
		cout<< "c++98\n";
	}
	else{
		cout << "pre-standard c++\n";
	}
    return 0;
}
