#include <iostream>
#include <memory>

using namespace std;

unique_ptr<int> get_instance()
{
    unique_ptr<int> p{new int{30}};
    cout << &p << "\n";

    return p;
}

int main()
{
    unique_ptr<int> x = get_instance(); // Moving object
    cout << *x << " " << &x << "\n";    // 30

    *x = 10;
    cout << *x << "\n"; // 10

    unique_ptr<int> y = get_instance(); // Moving object
    cout << *y << " " << &y << "\n";    // 30

    return 0;
}