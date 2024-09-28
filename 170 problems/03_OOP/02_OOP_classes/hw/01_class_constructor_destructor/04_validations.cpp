#include <iostream>
using namespace std;

/*
// Homework 4: Validations!
- Figure out one bug in this code
    - Fix it
    - Provide a tip for the coder!
- Figure out another potential bug
    - Provide a tip for the coder!
*/

/*
Answer:
    - put the constructor in public section
    - use const specifier with getters functions
    - price! local var or class var
*/
class OurPrice
{
private:
    int price;

public:
    OurPrice(int price) : price(price)
    {
    }
    int GetPrice() const
    {
        return price;
    }
    void SetPrice(int price)
    {
        if (price < 10)
            price = 0;
        this->price = 10;
    }
    int SomeFun()
    {
        int price = 10;
        int price2 = 20;
        int price3 = 30;
        // Is below price variable the local price with value 10 or the class class?
        // For a clear and maintainable code, avoid local variable names with same name as data members.
        return price + price2 + price3;
    }
};
int main()
{
    return 0;
}