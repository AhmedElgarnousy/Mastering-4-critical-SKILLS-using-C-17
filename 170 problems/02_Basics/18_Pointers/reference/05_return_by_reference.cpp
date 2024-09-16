#include<iostream>
using namespace std;

struct SpecialName{
    string name = "Ahmed";
    string& getName ()
    {
        return name;
    }
    void print()
    {
        cout<<name<<"\n";
    }
}; 

// Never do that, because tempMag will be destoryed
string& get_msg() {
    // Waring reference to local variables
    string tempMsg = "hello reference";
    return tempMsg;
}

string& get_msg(string &msg){
    // Waring reference to local variables
    msg = "msg changed";
    return msg;
}

int main()
{
    SpecialName my_name;
    my_name.print(); // Ahmed

    string &nameAlias = my_name.getName();
    nameAlias = "AhmedKamal"; 
    my_name.print(); // Ahmed

    my_name.getName() = "belel"; // for the first time to see function on the left side
    my_name.print(); // belel

////////////////////////////////////

    string my_msg = "message";
    // my_msg = get_msg();
    // cout<<my_msg<<"\n";

    my_msg = get_msg(my_msg);
    cout<<my_msg<<"\n";

    return 0;
}