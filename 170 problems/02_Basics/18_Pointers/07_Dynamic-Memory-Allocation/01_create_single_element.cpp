#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p0 = &x;
    int *p1 {nullptr};

    int * p2 = new int;
    *p2 = 20;

    cout << *p2 << p2 << &p2 <<"\n";

    int *p3 = new int {30}; // c++11 brace init syntax
    // int *p3 = new int (30); // initializer

    // p0 points to x. Never delete
    // p1 is nullptr. Never delete

    cout<< *p2 <<" "<<*p3<<"\n";
    // we created these 2 dynamically. Delete them

    delete p2;
    delete p3;

    p2 = p3 = nullptr;
    return 0;
}