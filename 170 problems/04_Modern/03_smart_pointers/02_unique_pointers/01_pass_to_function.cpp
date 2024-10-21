#include <iostream>
#include <memory>

using namespace std;

// pass by value
void print1(unique_ptr<int> p)
{
    if (p != nullptr)
        cout << *p << "\n";
}

// pass by reference
void print2(unique_ptr<int> &p)
{
    if (p != nullptr)
        cout << *p << "\n";
    // They can destory your pointer! Be careful
    p.reset();
}

// pass by const reference
void print3(const unique_ptr<int> &p)
{
    if (p != nullptr)
        cout << *p << "\n";
    *p = 10; // value can be changed
    // unique_ptr<int> &p2 = p;
    // p.reset(new int {7});
    // Good: No one can store or play with it.
}

void test()
{
    unique_ptr<int> p1{new int{20}};
    unique_ptr<int> &p2 = p1; // Alias OK. still one owner

    cout << *p2 << "\n";
    // print1(p2); // CE: use of deleted copy constructor
    print1(std::move(p2)); // Ok. Pass it, But don't use it after return
    // cout << *p2 << "\n"; // now garbage, don't use it after return

    p2.reset(new int{30});
    // cout << *p2 << "\n";
    print2(p2); // Perfect: pass it, then you can use it after return

    // print2(std::move(p2));// CE: temporary object to non-const refernece

    print3(std::move(p2)); // ok now const reference
}
int main()
{
    test();
    return 0;
}