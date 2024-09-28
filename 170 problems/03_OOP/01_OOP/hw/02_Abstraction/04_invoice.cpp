/*

- Several applications involve an invoice 
(Hotel, Online Shopping, etc)
- Design an invoice class that has the following fields
    - Name, item_number, price, quantity
    - E.g. Acer Laptop, 1011234, 3250.75, 2
-  Support setters and getters for them
-  Provide 3 other functionalities
    -  GetTotalPrice, Print, ToString
    -  ToString: Return a string for them comma separated
-  Implement them in 1 file, but separate Declarations from Definitions
    -  Optional: Separate using a header file also
*/

/*
// Answer;
*/
#include<iostream>
using namespace std;

class invoice
{
private:
    /* data */
    string name;
    int item_number;
    double price;
    int quantity;

public:
    invoice(/* args */);
    ~invoice();

    void setName(string name__);
};

invoice::invoice(/* args */)
{
}

invoice::~invoice()
{
}
void invoice::setName(string name__) {
        this->name = name__;
    }
