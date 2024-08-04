#include<iostream>

using namespace std;
/**************************************************
 * 			Easy: Homework 2: Is Suffix?          *
/*************************************************/

  /*
	Section: Char_Array
	Description:Homework 1: Is Suffix?
	Level: Easy Challenge
	*/

int main()
{
	string str_in, str;
	cin>>str_in>> str;
	int idx_str_in = str_in.size();
	for(int i = str.size(); i >=0; i--)
	{

		if(str[i] != str_in[idx_str_in])
		{
			cout<<"NO"<<"\n";
			return 0;
		}
		idx_str_in --;
	}
	cout<<"YES"<<"\n";

    return 0;
}