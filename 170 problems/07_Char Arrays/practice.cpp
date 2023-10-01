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

return 0;
}