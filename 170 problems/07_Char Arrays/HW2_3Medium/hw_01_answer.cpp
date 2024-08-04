#include<iostream>

using namespace std;
/*********************************************************************************
 * 						Medium: Problem #1: Compressing           *
/********************************************************************************/
    /*
	Section: Char_Array
	Description: Problem #1: Compressing
	Level: Medium Challenge
	*/

int main()
{
	string str;
	cin>>str;

	int com_num = 0;
	char prev_ch = str[0];

	for(int i = 0; i < str.size(); i++)
	{
		while(str[i] == prev_ch)
		{
			i++;
			com_num++;
		}

		cout<<str[i-1]<<com_num;
		com_num = 1;
		prev_ch = str[i];
		
		cout<<"_";
	}
	
	cout<<"\n";
    
	return 0;
}