#include <iostream>

using namespace std;

// Rectangle as struct
struct Rectangle
{
    double width;
    double height;

    Rectangle()
    {
        width = 0, height = 0;
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
};
int main()
{
    Rectangle r1;
    r1.width = 10;
    r1.height = 5;
    cout << r1.computeArea() << "\n";

    Rectangle r2(3, 5);
    cout << r2.computeArea() << "\n";
    cout << r2.computeperimeter() << "\n";
    return 0;
}