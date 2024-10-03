#include <iostream>
using namespace std;

/*
Homework 1: Build Hierarchy
- Design set of classes (no data/functions) to
express this classes hierarchy
*/
class Shape
{
};
class TwoDimensionalShape : public Shape
{
};
class ThreeDimensionalShape : public Shape
{
};
class Circle : public TwoDimensionalShape
{
};
class Square : public TwoDimensionalShape
{
};
class triangle : public TwoDimensionalShape
{
};

class Sphere : public ThreeDimensionalShape
{
};
class Cube : public ThreeDimensionalShape
{
};
class Tetrahedron : public ThreeDimensionalShape
{
};

int main()
{
    return 0;
}