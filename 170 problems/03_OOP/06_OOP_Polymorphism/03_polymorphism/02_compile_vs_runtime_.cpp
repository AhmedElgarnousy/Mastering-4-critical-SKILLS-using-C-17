#include <iostream>
using namespace std;

/*
- critical difference between virtual & non virtual
    - is binding means function connection
- Non-virtual = compile time polymorphism(static/early binding)
- virtual = runtime polymorphism(dynamic/late binding)
- ex: process(shape* shapePtr)

- Polymorphism (in public inheritance)
- Polymorphism word means have many forms
- Assume a chain of k classes inheritance
- in runtime, apointer calling function: either to base or derived(many forms)
- dynamic binding:
    - allows generic code (e.g. process(shape * shapePtr))
        without knowing exact children(derived)
    - we can extend new derived classes (e.g. Sphere shape)
        without code changes in base class
    - note: It's abit slower + but little memory that static binding
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

void process(Shape *shapePtr)
{
    // This function knows nothing
    // about childern (e.g. circle/rectangle)

    // compile time deternmined
    cout << "This shape's name is: "
         << shapePtr->GetShapeArea() << ". ";
    cout << "It's Area: " << shapePtr->Area() << "\n";
}
/*
void process(Shape &shapeRef)
{
    cout << "This shape's name is: "
         << shapeRef.GetShapeArea() << ". ";
    cout << "It's Area: " << shapeRef.Area() << "\n";
}
*/

int main()
{
    Rectangle Rect1("nice_rect1", 5, 4);
    process(&Rect1);

    // Rectangle *Rect2 = new Rectangle("nice_rect2", 3, 4);
    // process(Rect2);
    // delete Rect2;
    return 0;
}