#include<iostream>

using namespace std;
/*********************************************************************************
 * 							Medium: Problem #2: Compare strings                 *
/********************************************************************************/

    /*
	Section: Char_Array
	Description: Problem #2: Compare strings
	Level: Medium Challenge
	*/

int main()
{
	char ch;
	cin>>ch;
	if(ch + 5 < 10)
	{
		ch+= 5;
	}
	else
	{
		ch += ch - 5;
		ch += 6;
	}
	cout<<ch<<"\n";
	/*
	string str;
	cin>>str;

	for(int i = str.size(); i> str.size() -5 ; i--)
	{
		if(str[i] + 5 < 10)
		{
			str[i]+= 5;
		}
		else{
			str[i] += str[i] - 5;
			str[i-1] += 6;
		}
	}
	*/

	//cout<<str<<"\n";

    return 0;
}