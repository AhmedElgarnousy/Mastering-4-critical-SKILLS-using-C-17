#include <iostream>
#include <set>   // set and multiset
#include <tuple> // tie

using namespace std;

struct employee
{
    int num1, num2;
    string str;

    employee(int a, int b, string name) : num1(a), num2(b), str(name)
    {
    }

    bool operator<(const employee &rhs) const
    {
        // way1: compare as we did before
        if (num1 != rhs.num1)
            return num1 < rhs.num1;

        if (str != rhs.str)
            return str < rhs.str;

        return num2 < rhs.num2;

        // way2:  or use pair
        return make_pair(num1, make_pair(str, num2)) < make_pair(rhs.num1, make_pair(rhs.str, rhs.num2));

        // way3: to use tie: must be variables
        // return std::tie(num1, str, num2) < std::tie(rhs.num1, rhs.str, rhs.num2);
    }
};

int main()
{
    set<employee> s_emp;
    s_emp.insert(employee(10, 35, "mostafa"));
    s_emp.insert(employee(7, 15, "ali"));
    s_emp.insert(employee(10, 17, "zaid"));
    s_emp.insert(employee(10, 20, "mostafa"));

    for (auto emp : s_emp)
        cout << emp.num1 << " " << emp.str << " " << emp.num2 << "\n";

    /*
        7 ahmed 20
        10 mostafa 20
        10 mostafa 35
        10 zaid 17
    */
    return 0;
}