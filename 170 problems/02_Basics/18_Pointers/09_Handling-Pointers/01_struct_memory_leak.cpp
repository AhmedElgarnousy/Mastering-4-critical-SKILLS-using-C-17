#include<iostream>
using namespace std;

struct Emplyee {
    int * xPtr = nullptr;

    Emplyee(){
        xPtr = new int [5] {1,2,3,4,5};
    }

    void print()
    {
        cout<<*xPtr<<" "<<xPtr<<" "<<&xPtr<<"\n";
    }
};

int main()
{
    int *x = new int {10};
    delete x;
    // i created and deleted

    // But this struct creates internaly who deletes!
    Emplyee e; // memory leak
    e.print();

    return 0;
}