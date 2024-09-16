#include<iostream>
using namespace std;
int main()
{
    int arr[] {3, 5, 7, 9};
    cout<< arr<< "\n"; // address of the first element is the array

    int &val = arr[0]; // same address
    cout<< val << " " << &val <<"\n";

    cout<< &arr[0] <<"\n"; // or &arr 

    int * ptr = arr; // not &arr
    cout<< *ptr << ptr<<" "<< &ptr << "\n";

    // pointer to array u can use it as same ass array
    ptr[0] = 10, ptr[1] = 20;

    for(auto &val: arr)
        cout<<val<<" ";
    cout<<"\n"; // 10 20 7 9

    return 0;
}