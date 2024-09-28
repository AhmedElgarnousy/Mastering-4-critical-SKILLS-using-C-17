#include<iostream>
using namespace std;

struct Emplyee {
    int * xPtr = nullptr;

    Emplyee(){
        xPtr = new int [5] {1,2,3,4,5};
    }
    ~Emplyee() {
        cout<<"destructor says Byee\n";
        delete[] xPtr;
        xPtr = nullptr;
    }
    void print() {
        cout<<*xPtr<<" "<<xPtr<<" "<<&xPtr<<"\n";
    }

    // For now: Add these 2 lines when you have internal pointers
    // They will inform you about soon problems
    // Later in OOP: Full understanding and proper treatment
    Emplyee(const Emplyee& e) = delete;
    void operator = (const Emplyee& e ) = delete;
    // you don't need these 2 lines if u don't have pointers initialized with new in your class
    // so we aren't afraid of memory leaks or dangling pointer
};

int main()
{
    Emplyee e1, e2;
    // Now CE = saves us from our mistakes
    e2 = e1; 
    Emplyee e3 = e1;

    return 0;
}