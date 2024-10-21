#include <iostream>
#include <memory>

using namespace std;

void warning()
{
    int *p = new int{30};
    // You can assign same pointer to more than unique_ptr :(
    // Dangling pointer

    unique_ptr<int> p1{p};
    unique_ptr<int> p2{p};

    // RTE once we go out of the scope
    // Tip: Don't assign raw pointers this way
}

int main()
{
    warning();
    cout << "Bye\n";
    return 0;
}