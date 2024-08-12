#include <iostream>

using namespace std;
/*************************************************
 * 			 Homework 2: Reverse a string        *
/************************************************/

string reverse_str(const string &str){
    string CpyStr = str;
    int it =0;
    for(int i = str.size() -1; i >=0; i--)
        CpyStr[it++] =str[i];
    
    return CpyStr;
}
int main()
{
    string str1 = "ahmed";
    cout<<reverse_str(str1)<<"\n";
    return 0;
}