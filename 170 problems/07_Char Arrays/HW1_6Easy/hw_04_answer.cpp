#include<iostream>

using namespace std;
/*********************************************************************************
 * 									Easy: Homework 4: Is Subsequence?           *
/********************************************************************************/
    /*
	Section: Char_Array
	Description:Homework 4: Is Subsequence?
	Level: Easy Challenge
	*/

int main()
{
	string str_in, str;
	cin>>str_in>> str;

	int prev_idx = 	-1;
	for(int i = 0; i < str.size(); i++)
	{
		for(int j = 0; j< str_in.size(); j++ )
		{
			if(str[i] == str_in[j])
			{
				if (j < prev_idx)	
				{
					cout<<"No"<<"\n";
					return 0;
				}
				prev_idx = j;
				break;
			}
			else
			{
				if(j == str_in.size() - 1){
					cout<<"NO"<<"\n";
					return 0;
				}
			}
		}
	}
	cout<<"YES"<<"\n";

    return 0;
}