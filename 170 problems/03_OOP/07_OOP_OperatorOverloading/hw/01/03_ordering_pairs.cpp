#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
//Homework 3: Ordering pairs
- To be able to sort a vector of objects as in right
    code, the operator < must be supported on class type
- Add operator < as member function in the MyPair class
    to allow such code
*/

class MyPair
{
private:
    int first;
    int second;

public:
    // Constructors
    MyPair() {} // default
    // paramterized
    MyPair(int first, int second) : first(first),
                                    second(second) {}

    // opertor overloading
    bool operator<(const MyPair &c2)
    {
        if (first != c2.first)
            return first < c2.first;
        return second < c2.second;
    }

    void print()
    {
        cout << "(" << first << "," << second << ")" << "\n";
    }
};
int main()
{
    vector<MyPair> vec;
    vec.push_back(MyPair(10, 20));
    vec.push_back(MyPair(10, 7));
    vec.push_back(MyPair(1, 100));

    sort(vec.begin(), vec.end());

    for (auto &pair : vec)
        pair.print();

    return 0;
}