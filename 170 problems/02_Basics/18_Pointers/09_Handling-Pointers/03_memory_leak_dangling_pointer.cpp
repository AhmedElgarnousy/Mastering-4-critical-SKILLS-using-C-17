#include<iostream>
using namespace std;

struct Emplyee {
    int * xPtr = nullptr;

    Emplyee(){
        xPtr = new int [5] {1,2,3,4,5};
    }
    ~Emplyee()
    {
        cout<<"destructor says Byee\n";
        delete[] xPtr;
        xPtr = nullptr;
    }

    void print()
    {
        cout<<*xPtr<<" "<<xPtr<<" "<<&xPtr<<"\n";
    }
};

int main()
{
    Emplyee e1, e2;
    e1.xPtr[0] = 20;

    e1.print();
    e2.print();

    // take every element in e1 and assigned to e2
    e2 = e1; 
    // 20 0x786 0x787
    e2.print();

    // Crash!
    // e2 lost its xPtr value of the created memory
    // the value of e1 copied

    // problem 1): memory leak as we lost e2 created memory
    // problem 2): e1 ptr will be deleted twice = dangling = crash

    Emplyee e3 = e1; // same issue more implicit

    return 0;
}