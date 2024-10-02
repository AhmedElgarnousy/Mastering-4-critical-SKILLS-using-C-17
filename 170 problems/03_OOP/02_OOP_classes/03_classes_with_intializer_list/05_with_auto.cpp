#include <iostream>
using namespace std;

int main()
{
    auto x1 = {1, 2}; // std::initializer_list<int>
    // auto x2 = {1, 2.0}; // CE: cannot detect element type
    // auto x3{1, 2}; // CE: not a single element
    auto x4 = {3}; //  std::initializer_list<int>
    auto x5{3};    //  int since c++14
    return 0;
}