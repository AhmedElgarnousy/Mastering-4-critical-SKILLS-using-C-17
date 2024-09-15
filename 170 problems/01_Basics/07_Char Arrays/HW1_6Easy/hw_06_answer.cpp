#include<iostream>

using namespace std;
/*********************************************************************************
 * 									Easy: Homework 6: Grouping                 *
/********************************************************************************/

    /*
	Section: Char_Array
	Description:Homework 6: Is Grouping?
	Level: Easy Challenge
	*/

int main()
{
	string str;
	cin>>str;

	char prev_ch = str[0];
	for(int i = 0; i < str.size(); i++)
	{
		while(str[i] == prev_ch)
		{
			cout<<str[i];
			i++;
		}
		cout<<" "<<str[i];
		prev_ch = str[i];
	}

    return 0;
}