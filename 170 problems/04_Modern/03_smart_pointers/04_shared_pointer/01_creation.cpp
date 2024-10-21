#include <iostream>
#include <memory>

using namespace std;

void test()
{
    shared_ptr<int> p1{new int{20}};

    // shared_ptr<int>p1 = new int {20}; // CE
    // p1 = new int{20}; // CE

    shared_ptr<int> p2{p1}; // copy constructor ok

    shared_ptr<int> p3; // Assignment ok
    p3 = p2;
    *p1 = 5;

    // shared memory and same value
    cout << *p1 << " " << *p2 << " " << *p3 << "\n";

    // Preferred Way
    auto p4 = std::make_shared<int>(20);
    cout << *p4 << "\n";
}

int main()
{
    test();
    return 0;
}