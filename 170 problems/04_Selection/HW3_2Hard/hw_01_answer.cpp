#include <iostream>

using namespace std;


    
/***********************************************************************
*                  Hard: Problem #1: Intervals                         *
/**********************************************************************/
	/*
	Section: Selection.
	Description: Problem #1: Intervals
	Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
	Level: Hard Challenge
	*/

int main()
{
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
    return 0;
}