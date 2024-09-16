#include<iostream>
using namespace std;


// pass by reference 
void read(string name, int &x, string &str)
{
    cout<<"Hello "<<name<<"\n";

    cin>>x>>str;
    name = "ahmedchanged"; // passed by value so will not be changed
}

int main()
{
    string my_name = "Ahmed";
    int x;
    string msg;

    read(my_name, x, msg);

    cout<<my_name<<" "<<x<<" "<<msg<<"\n";
    return 0;
}