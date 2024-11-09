#include <iostream>

using namespace std;


/****************************************************************
*          Medium: Problem #2: Find Maximum up to 10            *
/***************************************************************/

    /*
	Section: Selection.
	Description: Problem #2: Find Maximum up to 10
	Read an integer N (2 <= N <= 10)
 	 Then read N integers, find which of them has the biggest value and print it.
	Level: Medium Challenge
	*/

int main()
{
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

    return 0;
}