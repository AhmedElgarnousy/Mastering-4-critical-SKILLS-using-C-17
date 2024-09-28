#include <iostream>

using namespace std;
/*
// more on constructor
- Initializer list values are even before executing constructor 
- only constructors take member initializers
- the only way to const member data and refernces is initializer list
- the recommended way
*/


class Rectangle
{
    private: 
        double width ;
        double height;
    public:
        Rectangle(): Rectangle(0.0, 0.0){
            // Delegating constructor
            // off-topic: Google power of delegation in workplace
        }
        Rectangle (double width, double height)
                :width(width),height(height)  {
                // It is called member initailzer list 
        }
        Rectangle (double width) :
                    width(width), height(0) {
                // function Overloading
        }


        // getters & setters
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
    cout<<r1.getWidth()<<" "<<r1.getHeight()<<"\n"; // 0.0 0.0

    Rectangle r2(3, 4); // 3 4
    cout<<r2.getWidth()<<" "<<r2.getHeight()<<"\n";

   Rectangle r3(5); // 5 0
    cout<<r3.getWidth()<<" "<<r3.getHeight()<<"\n";


    return 0;
}