#include <iostream>
#include <vector>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double width = 0.0, double height = 0.0) : width(width), height(height)
    {
    }
    double ComputeArea() const
    {
        // CE: function is const means that,
        // u can't change member variables
        // width = 1;
        return width * height;
    }
    // Setters & Getters
    double GetHeight() const
    {
        return height;
    }
    void SetHeight(double height)
    {
        this->height = height;
    }
    double GetWidth() const
    {
        return width;
    }
    void SetWidth(double width)
    {
        this->width = width;
    }
};

int main()
{
    Rectangle r1(2, 3);

    const Rectangle *r2 = new Rectangle(4, 5);
    // r2->SetWidth(10.2); // can't, const object data
    r2 = &r1; // ok, not const pointer

    Rectangle *const r3 = new Rectangle(1, 2);
    r3->SetWidth(10.2); // ok, non-const object data
    // r3 = *r1; // can't , const pointer

    const Rectangle *const r4 = new Rectangle(1, 2);
    // r4->SetWidth(10.2); // can't, const object data
    // r4 = *r1; // can't , const pointer

    const Rectangle *const r5 = &r1; // the opposite is not ok

    return 0;
}
