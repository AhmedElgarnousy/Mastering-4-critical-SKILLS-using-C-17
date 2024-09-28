#include <iostream>
using namespace std;

// Access modifers (public / private)
//  determines accessibility
class Quote
{
private:
    int internal;

    string getQuote()
    {
        return "The way to get started is to quit talking and begin doing";
    }

public:
    int external;

    Quote()
    {
        internal = 3;
        external = 7;
    }
    void print()
    {
        cout << getQuote() << "\n";
    }
};

int main()
{
    Quote q;
    cout << q.external << "\n";
    q.print();
    return 0;
}