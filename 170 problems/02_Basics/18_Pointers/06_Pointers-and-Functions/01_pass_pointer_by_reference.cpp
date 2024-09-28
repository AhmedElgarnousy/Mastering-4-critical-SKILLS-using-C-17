#include<iostream>
#include<vector>
using namespace std;

// pass by reference
void do_math(int &x)
{
    x = x + 1; // add 1
    x = 2 * x; // multiply by 2
    x *=2;     // multiply by 2
}

//func overlaoding: pass pointer by reference
void do_math(int *x)
{
    if(x == nullptr)
        return;
    
    *x = *x + 1; //  add 1
    *x = *x * 2; // multiply by 2 , note (pointer asterik, mutliplication asterik )
    *x *=2;      // multiply by 2
} 
void print(vector<int> * ptr)
{
    if(ptr == nullptr)
        return;

    for(auto v: *ptr)
        cout<<v<<" ";
    cout<<"\n";
}


int main()
{
    int val = 4;
    do_math(val); // pass by reference function
    cout<<val<<"\n"; // 20
    
    val = 4;
    do_math(&val);  // by pointer by reference function
    cout<<val<<"\n"; // 20

    vector<int> v {5, 7 , 8};
    // vector<int> v {nullptr};
    print(&v);

    return 0;
}