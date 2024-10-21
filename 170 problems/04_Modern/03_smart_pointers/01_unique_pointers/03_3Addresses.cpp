#include <iostream>
#include <memory> // smart pointers

using namespace std;

void test()
{
    unique_ptr<int> p{new int{20}};

    /*
    p is an object: so it has its own address
    inside it is a raw pointer
    The raw pointer itself: has an address
    The raw pointer points to an address

    now we have 3 addresses!
    */

    int *raw_p = p.get();

    cout << *raw_p << " " << *(p.get()) << " " << raw_p << " " << &raw_p << " " << &p << "\n";
    cout << std::addressof(p) << "\n";
}

int main()
{
    test();
    return 0;
}