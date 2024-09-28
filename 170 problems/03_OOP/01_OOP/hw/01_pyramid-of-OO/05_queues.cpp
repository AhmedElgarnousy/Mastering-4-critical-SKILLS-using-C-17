/*
- What is the problem of thew following code
- Do u remember how STL did magical thing to solve that?
*/


#include <iostream>

using namespace std;


struct QueueInt {
    int arr[100];
    // some functionalitites using type integer 
};

struct QueueDouble {
    double arr[100];
    // exactly same as above, but replace integer with double 
};

struct QueueString {
    string arr[100];
    // exactly same as above, but replace integer with string
};

/*
- Answer:
- DRY- Don't Repeat Yourself
*/
template<typename type, int SIZE>
struct Queue{
    type arr[SIZE];
};


int main()
{

    return 0;
}