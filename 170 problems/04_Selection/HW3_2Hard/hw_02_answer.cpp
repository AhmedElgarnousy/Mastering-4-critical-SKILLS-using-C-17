#include <iostream>

using namespace std;


/****************************************************************
*         Hard: Problem #2: Intersection of Two Intervals       *
/***************************************************************/
	/*
	Section: Selection.
	Description: Problem #1: Two Intervals Intersection
	Read 4 numbers representing 2 intervals and print their intersection interval. If
	they don’t intersect, print -1
	Level: Hard Challenge
	*/
int main()
{

	int s1, e1;
	cin>>s1>>e1;

	int s2, e2;
	cin>>s2>>e2;

	if (s2 >= s1 && s2 <=e1)
		cout<<s2<<" "<<e1<<"\n";
	else
		cout<<-1<<"\n";
    return 0;
}