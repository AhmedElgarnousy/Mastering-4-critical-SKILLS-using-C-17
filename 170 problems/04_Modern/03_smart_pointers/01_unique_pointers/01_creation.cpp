#include <iostream>
#include <memory> // smart pointers

using namespace std;

void test()
{
    // Direct Initialization
    unique_ptr<int> p1{new int{20}};

    // raw pointer
    int *ptr = new int{20};
    /*
        CE: conversion from int* to unique_ptr
        Interally explicit constructor
    */
    // unique_ptr<int> p1 = new int {20};

    cout << *p1 << " " << *ptr << "\n";

    ptr = new int{30};
    p1.reset(new int{30});
    cout << *p1 << " " << *ptr << "\n";

    delete ptr;
    // one we go out of scope
    // p1 internals are destroyed
}

int main()
{
    test();

    return 0;
}