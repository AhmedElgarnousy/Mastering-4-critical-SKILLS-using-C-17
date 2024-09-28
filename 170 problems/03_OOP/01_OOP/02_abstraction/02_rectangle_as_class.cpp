#include <iostream>

using namespace std;

/*
    Acessor = Getters
    Mutators = Setters
*/


// Rectangle as a class
class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle()
    {
        width = height = 0;
    }
    Rectangle(double _width, double _height)
    {
        width = _width;
        height = _height;
    }
    double computeArea()
    {
        return width * height;
    }
    double computeperimeter()
    {
        return 2 * (width + height);
    }
    // setters and getters
    void setWidth(double width_)
    {
        width = width_;
    }
    void setHeight(double height_)
    {
        height = height_;
    }
    double getHight()
    {
        return height;
    }
    double getWidth()
    {
        return width;
    }
};
int main()
{
    Rectangle r1;
    r1.setWidth(10);
    r1.setHeight(5);
    cout << r1.computeArea() << "\n";

    Rectangle r2(10, 3);
    cout << r2.computeArea() << "\n";
    cout << r2.computeperimeter() << "\n";
    return 0;
}