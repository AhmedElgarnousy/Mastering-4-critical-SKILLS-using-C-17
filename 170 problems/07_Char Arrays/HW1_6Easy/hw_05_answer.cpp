#include<iostream>
#include<math.h>


using namespace std;
/*********************************************************************************
 * 							Easy: Homework 5: Convert to number                 *
/********************************************************************************/
    /*
	Section: Char_Array
	Description:Homework 5: Is Convert to number?
	Level: Easy Challenge
	*/

int main()
{

	string str;
	cin>>str;

	int num = 0;
	int order = str.size() - 1;

	for(int i = 0; i < str.size(); i++)
	{
		//str starts with non zero letter 
		if(!(str[i] == '0'))
		{
			int digit = str[i] - 48;
			num += digit * pow(10, order);
			order --;
		}
		else
		{
			order --;
		}
	}

	cout<<num<<" "<< num*3<<"\n";

    return 0;
}