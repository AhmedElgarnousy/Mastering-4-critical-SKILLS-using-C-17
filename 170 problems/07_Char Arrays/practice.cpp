#include <iostream>

using namespace std;

/******************************************************************
                           * Practice * 
******************************************************************/
int main()
{

/******************************************************************
                     * The Null Character * 
******************************************************************/

/*
char name[5];
name[0] = 'H';
name[1] = '\0';
// name[1] = 'a';
name[2] = 'n';
name[3] = 'i';
name[4] = '\0';

cout<<name;
*/

/******************************************************************
                     * getline * 
******************************************************************/

/*
string line ;
int value;

cin>>value;

getline(cin, line);
getline(cin, line);
cout<<value<<"\n";
cout<<"**"<<line<<"**";
*/


/*
char ch1 = 'A';

int ch_value = ch1;
cout<<ch_value<<"\n";
cout<<(int)'A'<<"\n";
cout<<(int)'B'<<"\n";
cout<<(int)'C'<<"\n";
cout<<(int)'Z'<<"\n";
cout<<(int)'A' + 26 - 1<<"\n";

char ch2 = 90;
coxut<<ch2<<"\n";

cout<<"***\n";

cout<<ch_value<<"\n";
cout<<(int)'a'<<"\n";
cout<<(int)'b'<<"\n";
cout<<(int)'c'<<"\n";
cout<<(int)'z'<<"\n";
cout<<(int)'a' + 26 - 1<<"\n";

cout<<('A' < 'a')<<"\n";
*/

/*
char ch1 = 'D';

if('A' <= ch1 && ch1 <= 'Z')
{
  cout<<ch1<<" is an upper case\n";
  ch1 = ch1 - 'A' + 'a';
  cout<<ch1<<" Now is a loweer case\n";
}
else if('a' <= ch1 && ch1 <= 'z')
{
  cout<<ch1<<" ch1 is already a lower case\n";
}
else if('0' <= ch1 && ch1 <= '9')
{
  cout<<ch1<<" is a digit\n";
}
else
{
  cout<<ch1<<" is neighter a digit nor a letter\n";
}
*/
/******************************************************************
                 * Reading a string with a spaces * 
******************************************************************/



/**********************************************************
 * 		    	Practice: concatenating strings           *
/*********************************************************/
/*
    string str1;
    string str2;

    cin>>str1;
    cin>>str2;

    int mz_size = str1.size();

    if(mz_size < str2.size())
        mz_size = str2.size();

    for(int i = 0; i <mz_size; i++){
        
        if(i<str1.size())
            cout<<str1[i];
        
        if(i<str2.size())
            cout<<str2[i];
    }

*/

/********************************************************
 * 		    	Practice: Letter Frequency                  *
/*******************************************************/

/*
    string str;
    cin>>str;

    int freq_arr[26]{0};

    for(int i = 0; i < str.size(); i++)
    {
        // ignore upper case letters
        if('A' <= str[i] && str[i] <= 'Z')  
            continue;
 
        int idx = str[i] -'a';
        // cout<<"idx is "<<idx<<"\n";
        freq_arr[idx]++;
        // cout<<"freq "<< freq_arr[idx]<<"\n";
    }

   
    for(int i =0; i < 26; i++)
    {
        // ignore no mentioned letters
        if(freq_arr[i])
        {
            char ch = 'a'+i;
            cout<<ch <<" "<<freq_arr[i]<<"\n";
        }
    }
*/

/********************************************************
 * 		  Practice: special string mapping              *
/*******************************************************/

/*
● Read a string and do the following conversions for its letters
    ○ If it is an upper letter, don’t change
    ○ If it is lower letter, use this map of 26 letters:
        ■ abcdefghijklmnopqrstuvwxyz
        ■ YZIMNESTODUAPWXHQFBRJKCGVL
        ■ E.g. a ⇒ Y and z ⇒ L

    ○ If it is digit, use this map of 10 letters:
        ■ 0123456789
        ■ !@#$%^&*()

● Example Input ⇒ Output
    ○ acMNmn39 ⇒ YIMNPW$)
    ○ vwXYZ0123 ⇒ KCXYZ!@#$
*/  


/*
string str_lower_map = "YZIMNESTODUAPWXHQFBRJKCGVL";
string str_dig_map = "!@#$%^&*()";
string str_in, str_out[9];
int idx;

cin>>str_in;

    for(int i = 0; i < str_in.size(); i++)
    {
        // ignore upper case letters
        if('A'<= str_in[i]  && str_in[i] <='Z')
        {   
            str_out[i] = str_in[i];
        }
        else if('a'<= str_in[i]  && str_in[i] <='z')
        {
            idx = str_in[i] - 'a';
            str_out[i] = str_lower_map[idx];
        }
        else
        {    
            idx  = (int)str_in[i] - 48;
            str_out[i] = str_dig_map[idx];
        }

    }
// cout<<str_out;
for(int i =0; i<9; i++)
   cout<< str_out[i];

cout<<"\n";
*/

return 0;
}