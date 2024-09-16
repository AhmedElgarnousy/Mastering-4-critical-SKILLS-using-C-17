#include<iostream>
using namespace std;
int main()
{
    int arr [] {3,5,7,9};
    
    int*ptr = arr;

    cout<< ptr + 0 <<" "<< &arr[0] <<"\n";
    cout<< ptr + 1 <<" "<< &arr[1] <<"\n";
    cout<< ptr + 2 <<" "<< &arr[2] <<"\n";
    cout<< ptr + 3 <<" "<< &arr[3] <<"\n";
    
    cout<< *(ptr +0) <<" "<< arr[0] <<"\n";
    cout<< *(ptr +1) <<" "<< arr[1] <<"\n";
    cout<< *(ptr +2) <<" "<< arr[2] <<"\n";
    cout<< *(ptr +3) <<" "<< arr[3] <<"\n";

    // arr[idx] = subscript notation
    // *(ptr + offset) = offset notation


    // Be carefull
    cout<< *(ptr +3) <<" , "<< *ptr + 3 <<"\n"; // 9 , 6

    return 0;
}