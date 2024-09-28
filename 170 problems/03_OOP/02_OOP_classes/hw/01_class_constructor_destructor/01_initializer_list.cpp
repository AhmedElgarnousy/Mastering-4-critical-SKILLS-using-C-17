#include <iostream>
using namespace std;

/*
Homework 1: Initializer list!
We learned that it is recommended to use the initializer list for constructor
- Assume we have a class of several variables (e.g. a, b, c in order)
- But the initializer list is b, a, c
- Will the constructor initialize based on class order or initializer-list order?
- Also, what is the order of the destructor?
- It is preferred to learn the answer by reading a book/reference
- But, implement a program that its results can help us answer the 2 questions
*/
class A
{
private:
public:
    A()
    {
        cout << "A Constructor\n";
    }
    ~A()
    {
        cout << "A Destructor\n";
    }
};
class B
{
private:
public:
    B()
    {
        cout << "B Constructor\n";
    }
    ~B()
    {
        cout << "B Destructor\n";
    }
};
class C
{
private:
public:
    C()
    {
        cout << "C Constructor\n";
    }
    ~C()
    {
        cout << "C Destructor\n";
    }
};
class D
{
private:
    B b;
    A a;
    C c;

public:
    D() : b(B()), a(A()), c(C())
    {
        cout << "D Constructor\n";
    }
    ~D()
    {
        cout << "D Destructor\n";
    }
};
/*
 */
int main()
{
    D d;
    /*from rsults: constructors are called based on class data member order
     NOT initalizer list order*/
    return 0;
}

/*
A Constructor
B Constructor
C Constructor
D Constructor
D Destructor
C Destructor
B Destructor
A Destructor
*/