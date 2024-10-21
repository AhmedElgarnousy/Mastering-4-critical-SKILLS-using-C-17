#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void test()
{
    vector<unique_ptr<int>> vec;
    // push back on fly
    vec.push_back(std::make_unique<int>(7));
    cout << *vec.front() << "\n"; // 7

    auto p1 = make_unique<int>(20);
    // vec.push_back(p1); // CE copy constructor
    vec.push_back(std::move(p1));
    // vec.push_back(std::move(p1)); segmentation fault (core dump)

    auto p2 = make_unique<int>(20);
    // emplace_back constructs in-place even without std::move
    // emplace_back more efficient than push_back
    vec.emplace_back(std::move(p2));
    vec.emplace_back(make_unique<int>(8));

    // since c++17: you can use emplace_back with & return
    // auto &b = vec.emplace_back(std::make_unique<int>(9));
    for (auto &p : vec)
    {
        // you must use & because copy not allow
        cout << *p << " ";
    }
}

int main()
{
    test();
    return 0;
}