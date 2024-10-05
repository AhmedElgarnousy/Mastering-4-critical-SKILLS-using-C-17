#include <iostream>
using namespace std;

/*
- tip; whenver you create a virtual function, you have to provide virtual descreactor
- shape can't provide default implementation for area functions
- when you provide a virtual function, you saying a message that
    this function should be override from parent class
*/

class Shape
{
private:
    string name;

public:
    Shape(string name) : name(name)
    {
    }
    virtual int Area()
    {
        throw logic_error("Not Implemented. Do override");
        return -1;
    }
    string GetShapeArea()
    {
        return name;
    }
    virtual ~Shape() {}
};

class Rectangle : public Shape
{
private:
    int width;
    int height;

public:
    Rectangle(string name, int width, int height) : Shape(name), width(width), height(height)
    {
    }
    int Area()
    {
        return width * height;
    }
};

int main()
{
    // Rectangle *Rect = new Rectangle("nice_rect", 3, 4);
    Shape *Rect = new Rectangle("nice_rect", 3, 4);
    cout << Rect->Area() << "\n";

    delete Rect;
    return 0;
}