#include <iostream>
using namespace std;

/*
// Initializer list
- this type is used to access the values in a c++ initializtion list,
    which is a list of elements of type const T
- Light weight and memory efficient
- Not member list initialization
*/

class Adder
{
private:
    int total_sum{};

public:
    Adder() {}
    Adder(const initializer_list<int> &lst)
    {
        Add(lst);
    }
    int Add(int a, int b)
    {
        total_sum += a + b;
        return total_sum;
    }
    int Add(const initializer_list<int> &lst)
    {
        int sum{};
        for (auto &value : lst)
        {
            sum += value;
        }
        total_sum += sum;
        return total_sum;
    }
    int GetCurrentSum()
    {
        return total_sum;
    }
};

int main()
{
    Adder adder{1, 2, 3};
    cout << adder.GetCurrentSum() << "\n"; // 6

    adder.Add(3, 4);
    cout << adder.GetCurrentSum() << "\n"; // 13

    adder.Add({3, 4});
    cout << adder.GetCurrentSum() << "\n"; // 20

    adder.Add({3, 4, 3});
    cout << adder.GetCurrentSum() << "\n"; // 30

    return 0;
}