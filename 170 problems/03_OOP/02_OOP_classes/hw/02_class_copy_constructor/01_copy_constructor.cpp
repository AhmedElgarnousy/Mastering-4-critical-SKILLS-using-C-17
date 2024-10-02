#include <iostream>
using namespace std;
/*
// Homework 1: copy constructor
● The format we used for copy constructor argument
    ○ const MyNumber &another
● 1) What happens if we moved a constructor to the private section?
    ○ Think first. Try second
● 2) What happens if we moved the copy constructor to the private section?
● 3) C++ won’t allow you to not use the &, Why?
    ○ What kind of behaviour will happen?
● 4) C++ don’t force you to use const. Why is it a good practice to use it?
*/

/*
// Answer
1- As this constructor is private, extrernal users can't make objects of such a class using this constructor!
    If this is the empty constructor and no further constructors, users can't create a class at all

    Why would that be benificial?!

2- if a copy constructor is made private, objects of that class become non-copyable.

3- Why argument to a copy constructor must be passed as a reference?
    A copy constructor is called when an object is passed by value.
    Copy constructor itself is a function. So if we pass an argument by value in a copy constructor, a call to copy constructor
    would be made to call copy constructor ==> infinite recursion
    Therefore compiler doesn’t allow parameters to be passed by value.

    Surce: geeksforgeeks

4- https://www.geeksforgeeks.org/copy-constructor-argument-const/


*/
class MyNumber
{
private:
    int *val1;
    int val2;

public:
    MyNumber(int x = 3, int y = 5)
    {
        val1 = new int;
        *val1 = x;
        val2 = y;
    }
    // copy constructor
    MyNumber(const MyNumber &another)
    {
        val1 = new int;
        *val1 = *another.val1;
        val2 = another.val2;
    }

    ~MyNumber()
    {
        delete val1;
        val1 = NULL;
    }
    void PrintValueAndAddress()
    {
        cout << *val1 << " " << val1 << "\n";
        cout << val2 << " " << &val2 << "\n";
    }
};

int main()
{
    MyNumber a;
    MyNumber b(a);
    a.PrintValueAndAddress();
    b.PrintValueAndAddress();
    return 0;
}