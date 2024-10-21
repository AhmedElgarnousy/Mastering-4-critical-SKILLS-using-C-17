#include <iostream>
#include <memory> // smart pointers

using namespace std;

void test()
{
    unique_ptr<int> p1{new int{20}};

    // CE: use of deleted copy constructor
    // unique_ptr<int> p2{p1};

    /*
    we cann't use copy constructor
    but we can move p1 internals to p2
    useful for function calls in some scenarios
    */
    unique_ptr<int> p2{std::move(p1)};
    // Now: Don't use p1 any more. Another pointer has ownership

    if (p1 == nullptr)
        cout << "Yah\n"; // Yah

    cout << *p2 << "\n"; // 20

    // Force delete
    p2 = nullptr; // Exception in assignment
    p2.reset();   // also set to nullptr
}

int main()
{
    test();
    return 0;
}