#include <iostream>
using namespace std;
/*
//Homework 3: Smart code!
-  What will happen when this code run?
-  Why?
-  How to change to prevent user from such wrong usage?
-  Any tips for the coder who did so?
*/
class ClassA
{
private:
    int *val;

public:
    ClassA(int v)
    {
        val = new int;
        *val = v;
    }
    ~ClassA()
    {
        delete val;
        val = NULL; // good practice
    }
    int *getVal()
    {
        return val;
    }
    void setVal(int *val)
    {
        this->val = val;
    }
};
int main()
{
    ClassA a1(10);
    ClassA a2(20);
    cout << a1.getVal() << "\n";
    cout << a2.getVal() << "\n";
    return 0;
}