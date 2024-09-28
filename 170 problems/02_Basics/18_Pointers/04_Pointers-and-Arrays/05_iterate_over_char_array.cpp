#include<iostream>
using namespace std;
int main()
{
    char arr[] = "hello ahmed";

    char* str = arr;
    while(*str != '\0')
        cout<< *str++;
    cout<<"\n";
    return 0;
}