#include <iostream>

using namespace std;

// More
// Templates may have more than one type 

// template<class Type1, class Type2>
template<typename Type1, typename Type2>

Type1 sum(Type1 a, Type2 b)
{
    return  a + b;
}


int main()
{
    cout << sum(2, 3.5)<<"\n";                  // 5 gussed as int
    cout << sum<int, double>(2, 3.5)<<"\n";     // 5 as Type1
    cout << sum<double>(2, 3.5)<<"\n";          // 5.5 as Type1
    cout << sum<int>(2, 3.5)<<"\n";             // 5 as Type1

    cout << sum('A', 1) << "\n";                // B as Type1
    cout << sum(1, 'A') << "\n";                // 66 as Type1

    //cout << sum("I am", "Mostafa") << "\n";     // CE: char*

    cout << sum(string("I am "), string("Mostafa")) << "\n";  //I am Mostafa

    return 0;
}