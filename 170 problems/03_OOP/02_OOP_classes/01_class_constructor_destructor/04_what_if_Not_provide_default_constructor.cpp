#include <iostream>

using namespace std;
/*
// constructor

*/


class Rectangle
{
    private: 
        double width = 10;
        double height = 20;
    public:
       
        // NOt  provided a default constructor
        // ...
        // Rectangle():width(0), height(0){}

        // methodes
        double computeArea() {
            return width * height;
        }
        double computePerimeter() {
            return width*height*2;
        }
        
        // getter and setters
        double getWidth() const{
            return width;  
        }
        void setWidth(double width_) {
             width = width_;  
        }
        double getHeight() const{
            return height;
        }
        void getHeight(double height_) {
            height = height_;
        }
};

int main()
{
    Rectangle r1; 
    cout<<r1.computeArea()<<"\n"; // 200
    r1.setWidth(5); 
    cout<<r1.computeArea()<<"\n"; // 100

    return 0;
}