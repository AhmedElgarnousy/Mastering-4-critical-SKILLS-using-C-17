#include <iostream>
#include <memory>

using namespace std;

void go1(shared_ptr<int> p1)
{
    cout << p1.use_count() << "\n"; // 4
}
void go2(shared_ptr<int> &p1)
{
    cout << p1.use_count() << "\n"; // 3 because not copy
}
void test()
{
    shared_ptr<int> p1{new int{20}};
    cout << p1.use_count() << "\n"; // 1

    shared_ptr<int> p2{p1};
    cout << p1.use_count() << " " << p2.use_count() << "\n"; // 2 2

    {
        shared_ptr<int> p3;
        p3 = p2;
        cout << p1.use_count() << " " << p3.use_count() << "\n"; // 3 3
        go1(p2);
        cout << p1.use_count() << "\n"; // 3
        go2(p2);
    } // Go out of scope: count --

    cout << p1.use_count() << " " << p2.use_count() << "\n"; // 2 2
    p1 = nullptr;
    cout << p2.use_count() << "\n"; // 1
    // p2 goes out of scope: original memory is deallocated
}

int main()
{
    test();
    return 0;
}