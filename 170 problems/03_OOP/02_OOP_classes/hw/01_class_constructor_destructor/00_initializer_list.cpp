#include <iostream>
using namespace std;

/*
Homework 0: Initializer list!
We learned that it is recommended to use the initializer list for constructor
- Assume we have a class of several variables (e.g. a, b, c in order)
- But the initializer list is b, a, c
- Will the constructor initialize based on class order or initializer-list order?
- Also, what is the order of the destructor?
- It is preferred to learn the answer by reading a book/reference
- But, implement a program that its results can help us answer the 2 questions
*/
class order
{
private:
    int a;
    int b;
    int c;

public:
    order(int a, int c, int b) : b(b), a(a), c(c) {}
    void print()
    {
        cout
            << "a: " << a << "\n"
            << "b: " << b << "\n"
            << "c: " << c << "\n";
    }
};
/*
 */
int main()
{
    order orderTest(1, 2, 3); // a, c , b
    orderTest.print();        // 2 1 3, acoording to passing arguments order

    return 0;
}