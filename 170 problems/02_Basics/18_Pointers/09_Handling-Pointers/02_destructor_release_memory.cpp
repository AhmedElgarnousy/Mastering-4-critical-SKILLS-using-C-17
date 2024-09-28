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
    Emplyee e;
    e.print();
    
// 1 0x6c12f0 0x61fe08
// destructor says Byee
    return 0;
}