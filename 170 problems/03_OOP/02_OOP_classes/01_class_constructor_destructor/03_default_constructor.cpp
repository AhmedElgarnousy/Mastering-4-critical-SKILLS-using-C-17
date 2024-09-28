#include <iostream>

using namespace std;
/*
// constructor
- special member function
- automatically called when an object created
- same as class name 
- no return
- default constructor (no arguments)
- parameterized constructor (has arguments)
*/


class Rectangle
{
    private: 
        double width;
        double height;
    public:
        Rectangle(): width(0), height(0) {
            // NO arguments
        }
        Rectangle (int width = 0,  int height =0) :
            width(0), height(0) {
                // default values
        }
        // This code won't compile, as both are same (overlaoded) 
};

int main()
{
    // Rectangle r1;

    return 0;
}