#include<iostream>

using namespace std;

/*********************************************************************************
 * 					Easy: Homework 1: Is Prefix?                 *
/********************************************************************************/
    /*
	Section: Char_Array
    Homework 1: Is Prefix?
	Description:
	Level: Easy Challenge
	*/

int main()
{

	string str_in, str;
	cin>>str_in>> str;

	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] != str_in[i])
		{
			cout<<"NO"<<"\n";
			return 0;
		}
	}
	cout<<"YES"<<"\n";
  
    return 0;
}