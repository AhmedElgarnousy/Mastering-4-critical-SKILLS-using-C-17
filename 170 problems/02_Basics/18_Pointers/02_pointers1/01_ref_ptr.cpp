#include<iostream>
using namespace std;

int main()
{
    int val = 10; // variable called val
    int &ref = val; // alias to val called ref

    cout<<val<< " "<<&val<<"\n";
    cout<<ref<< " "<<&ref<<"\n";

    int *ptr = &val; 
    cout<<*ptr<<" "<<ptr<<" "<<&ptr<<"\n";

    *ptr = 20;
    cout<<*ptr<<" "<<ref<<" "<<val<<"\n";

    int another = 30;
    cout<<another<<" "<<&another<<"\n";

    ptr= &another; //note: (&ptr)the address of the ptr itself doesn't change
    cout<<*ptr<<" "<<ptr<<" "<<&ptr<<"\n";

    *ptr = 50;
    cout<<val<<" "<<another<<" "<<*ptr<<"\n";

    ptr = nullptr; // pointing to nothing
    if(!ptr)
        cout<<"NNUULL"<<"\n";
    
    return 0;
}