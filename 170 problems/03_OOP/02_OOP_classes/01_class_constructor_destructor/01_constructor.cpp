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
        Rectangle() {
            width = height = 0;
        }
        Rectangle (double width_, double height_) {
            width = width_, height = height_;
        }
        
        // getter and setters
        double getWidth() const{
            return width;  
        }
         double getHeight() const{
            return this->height;
        }
};

int main()
{
    Rectangle r1; 
    cout<<r1.getWidth()<<" "<<r1.getHeight()<<"\n";

    Rectangle r2(3, 4); 
    cout<<r2.getWidth()<<" "<<r2.getHeight()<<"\n";


    return 0;
}