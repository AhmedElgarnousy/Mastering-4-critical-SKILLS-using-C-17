#include <iostream>
#include <set>
#include <tuple>
#include <utility>  // for pair

using namespace std;

struct employee
{
    int num1, num2;
    string str;

    employee(int a, int b, string name)
    {
        num1 = a, num2 = b, str = name;
    }

    bool operator < (const employee &rhs) const {
        // compare as we did before
        if(false)
        {
            if(num1 != rhs.num1)
                return num1 < rhs.num1;

            if( str != rhs.str)
                return str < rhs.str;
            
            return num2 < rhs.num2;
        }

        if(false)
        {
            return make_pair(num1, make_pair(str, num1)) 
                    < make_pair(rhs.num1, make_pair(rhs.str, rhs.num1)); 
        }

        return std::tie(num1, str, num2) <
            std::tie(rhs.num1, rhs.str, rhs.num1);

    }
};


int main()
{
    set<employee>s;

    s.insert(employee(10, 35, "mostafa"));
    s.insert(employee(7, 15, "ali"));
    s.insert(employee(10, 17, "ziad"));
    s.insert(employee(10, 20, "mostafa"));

    for(auto emp : s)
    {
        cout<<emp.num1<< " "<< emp.num2<<" "<<emp.str<<"\n";
    }

   

   return 0;
}

