#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void test()
{
    // typedef shared_ptr<int> IntPtr;
    using IntPtr = shared_ptr<int>;

    std::vector<IntPtr> vec;

    // IntPtr p1{new int{20}};
    // IntPtr p2{new int{2}};
    auto p1 = std::make_shared<int>(2);
    // auto p2 = std::make_shared<int>(3);
    vec.push_back(p1);
    vec.push_back(p1);
    vec.push_back(p1);
    // vec.push_back(p2);
    // vec.push_back(std::move(p2)); // segmenattion fault (core dump)
    // vec.push_back(p2);
    cout << p1.use_count() << "\n"; // 4
    // vec.clear();
    // cout << p1.use_count() << "\n"; // 1

    // for (auto &p : vec) // for unique pointers
    for (auto p : vec)
        cout << *p << " ";
    cout << "\n"; // 2 2 2
}

int main()
{
    test();
    return 0;
}