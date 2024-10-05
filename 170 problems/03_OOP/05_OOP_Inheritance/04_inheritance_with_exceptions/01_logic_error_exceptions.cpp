#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
// https://users.cs.fiu.edu/~weiss/phc++/code/exceptionDemo.cpp

// 3 functions
void array_access(int pos)
{
    vector<int> v(5);
    v.at(pos) = 1; // out_of_range is a logical_error
}
double mysqrt(double x)
{
    if (x < 0)
    {
        throw domain_error("sqrt of neg number");
    }
    else
    {
        return sqrt(x);
    }
}
double myexp(double x)
{
    double result = exp(x);
    if (result == HUGE_VAL)
    {
        throw out_of_range("exp too large");
    }
    else
    {
        return result;
    }
}
// test 3 functions with catching the exceptions
void test1(double x)
{
    // proper ordering for the catch
    try
    {
        mysqrt(x);
        myexp(x);
        array_access(x);
    }
    catch (out_of_range &e)
    {
        cout << "Caught out_of_range exception " << e.what() << endl;
    }
    catch (domain_error &e)
    {
        cout << "Caught domain_error exception " << e.what() << endl;
    }
    catch (logic_error &e)
    {
        cout << "Caught PARAENT logic_error exception " << e.what() << endl;
    }
}
void test2(double x)
{
    // Improper ordering for the catch
    // to know that
    // out_of_range, domain_error
    // inheritant from logic_error
    // that also inherite from execption class
    try
    {
        mysqrt(x);
        myexp(x);
        array_access(x);
    }
    catch (logic_error &e)
    {
        cout << "Caught PARENT logical_error exception " << e.what() << endl;
    }
    catch (out_of_range &e)
    {
        cout << "Caught out_of_range exception " << e.what() << endl;
    }
    catch (domain_error &e)
    {
        cout << "Caught domain_error exception " << e.what() << endl;
    }
}

int main()
{
    // test1(-4);       // domain_error for mysqrt
    // test1(10);       // out_of_range for at array_access
    // test1(10000000); // out_of_range for myexp

    test2(-4); // Caught PARENT logical_error exception sqrt of neg number
    test2(10); // Caught PARENT logical_error exception vector::_M_range_check: __n (which is 10) >= this->size() (which is 5)

    test2(10000000); // Caught PARENT logical_error exception exp too large

    return 0;
}