/*
We know every variable has a different address in memory
- What about a member function.
- If you have class LuckyNum and member function PrintAddress
- You can print its address using:
- printf("Function address :%p\n", &LuckyNum::PrintAddress);
- Printf in c close to cout in C++
- It is easier to use it to print the member function address
- Write a simple code to show:
- Will every member function has its own address or common one?

*/

// Answer

#include <iostream>

using namespace std;

class LuckyNum{
    private:
        int num =13;
    public:
        void PrintAddress(){
        printf("Data member address :%p\n", &num);
        printf("Function member Address: %p\n", &LuckyNum::PrintAddress);
        };
        
};

int main()
{
    LuckyNum n1;
    n1.PrintAddress();
    LuckyNum n2;
    n2.PrintAddress();

    return 0;
}