#include <iostream>

using namespace std;

// templates in cpp

template <typename Type>
Type MyMax(Type a, Type b)
{
    if(a > b)
        return a;
    return b;
}
struct Employee{};

int main()
{
    cout<<std::max<int>(3.3, 2.2)<<"\n"; //3 
    
    cout<<MyMax(3, 2)<<"\n"; // 3 gussed as int
    
    cout<<MyMax<double>(2.5, 9.5)<<"\n"; //9.5
    cout<<MyMax<int>(2.5, 9.5)<<"\n";// 9
    
    // know that char
    cout<<MyMax('A', 'X')<<"\n"; // X
    cout<<MyMax<char>('A', 'X')<<"\n"; // X
    
    //std::cout<<MyMax(2, 3.5)<<"\n"; // CE: Can't guess
    cout<<MyMax<int>(2, 3.5)<<"\n"; // 3

    Employee a, b;
    // cout<<MyMax<Employee>(a,b); // CE: can't compare til now

    return 0;
}