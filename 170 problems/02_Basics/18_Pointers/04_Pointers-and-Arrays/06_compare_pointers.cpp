#include<iostream>
using namespace std;

int main()
{
    string str1= "ahmed";
    string str2= "ahmed";

    cout<< ( str1 == str2 )<<"\n"; // true
    
    string * ptr1 = &str1;
    string * ptr2 { &str2 }; // c++ style

    // Be carefull : do u wanna compare addresses or values
    cout<< (ptr1 == ptr2 )<<"\n"; // false
    cout<< (*ptr1 == *ptr2)<<"\n"; // true

    return 0;
}