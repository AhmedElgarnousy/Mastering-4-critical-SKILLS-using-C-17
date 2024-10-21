#include <iostream>
#include <memory>

using namespace std;

void test()
{
    auto p1 = make_unique<int>(20);

    // Return the pointer and set nullptr
    int *p = p1.release();

    if (p1 == nullptr)
        cout << "p1 gone\n";

    // The ONLY case when you have to remove p
    cout << *p << "\n";
    delete p;

    p = nullptr;
    // Don't use release unless good reason
}

int main()
{
    test();
    return 0;
}