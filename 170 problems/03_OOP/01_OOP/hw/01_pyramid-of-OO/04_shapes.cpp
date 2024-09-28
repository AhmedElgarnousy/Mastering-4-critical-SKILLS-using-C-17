/*
Think in Rectangle, Triangle, Circle in drawing application
- what are common between them ? what is special in each of them?
- THink in terms of data members, member function names & functions behaviour
*/


#include <iostream>

using namespace std;

/**
 * answer:
 */
struct Color{};
struct Background_color{};

 struct Style {
    int fontSize;
    Color color;
    Color BackgroundColor;
 };

struct Point{
    int x;
    int y;
    int z;
};

struct Shape{
    Point startPoint;
    Point EndPoint;

   void calculate_dimension(
    Point startPoint, Point EndPoint) {
        
    }
};

struct Circle{
    Shape my_shape;
    Style my_style;
};
struct Rectangle{
     Shape my_shape;
    Style my_style;
};
struct Triangle{
     Shape my_shape;
    Style my_style;
};
struct Arrow{
     Shape my_shape;
    Style my_style;
};
struct PencilFreeHand{
     Shape my_shape;
    Style my_style;
};
struct LineTool{
     Shape my_shape;
    Style my_style;
};

int main()
{

    return 0;
}