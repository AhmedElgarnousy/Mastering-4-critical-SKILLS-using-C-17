#include<iostream>

using namespace std;


/*********************************************************************************
 * 								Easy: Homework 3: Is Substring?                 *
/********************************************************************************/
    /*
	Section: Char_Array
	Description:Homework 3: Is Substring?
	Level: Easy Challenge
	*/

// improvements: do it as utiliies 
// like
// is_substring(string str_in, string str), 
// is_suffix(string str_in, string str), 
// is_infix(string str_in, string str), 

// so every infix and suffix is substring

int main()
{
	string str_in, str;
	cin>>str_in>> str;

	int start_idx = 0;

	// get the start idx in the str_in
	while(str[0] != str_in[start_idx] )
	{
		start_idx++;
		// str[0] as letter doesn't exist in str_in
		if(start_idx == str_in.size())
		{
			start_idx = 0;
			break;
		}
	}

	for(int i = start_idx, j = 0; i < (int)str.size() + start_idx; i++, j++)
	{
			if(str[j] != str_in[i])
			{
				cout<<"NO"<<"\n";
				return 0;
			}
	}
	cout<<"YES"<<"\n";

    return 0;
}