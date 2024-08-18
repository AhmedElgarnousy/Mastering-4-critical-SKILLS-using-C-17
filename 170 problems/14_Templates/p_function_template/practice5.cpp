#include <iostream>

using namespace std;

// function template specialization 

template <typename Type>
Type add(Type a, Type b)
{
    return a + b ;
}

//template<class Type>
template <class Type>
Type multiply(Type a, int factor)
{
    return a * factor;
}

template <>
string multiply(string str, int factor)
{
    // we can't multipy strings
    string res = "";
    while(factor--)
        res += str;
    
    return res;
}

int main()
{
    string str = "Magic";

    cout << add(10, 4)<<"\n";           // 14
    cout << add(str, str)<<"\n";           // MagicMagic

    cout << multiply(4, 4)<<"\n";           // 12
    cout << multiply(str, 4)<<"\n";           // MagicMagicMagicMagic

    cout << multiply(4, 3)<<"\n";           // 12 gussed type integer
    cout << multiply<int>(4, 3)<<"\n";      // 12
    
    cout << multiply(4.3, 3)<<"\n";         // 12 .9 gussed type double
    cout << multiply<double>(4.3, 3)<<"\n"; // 12 
    cout << multiply(4, 3.2)<<"\n";         // 12 

    cout << multiply<string>("ahmed ", 3)<<"\n";

    return 0;
}