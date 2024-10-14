#include <iostream>
using namespace std;

int main()
{
    int salary = 100; // pass
    /*-------------------------*/

    /*
    My-Ans: it's an (salary + 1) should have an address and name (identity) can't not
    CE-Msg: error: lvalue required as left operand of assignment
    salary + 1 = 300;
    */

    /*-------------------------*/
    int &ref1 = salary; // pass
    ref1 = 20;          // pass
    // cout << salary << " " << ref1 << "\n"; // 20

    /*-------------------------*/

    // My-Ans: this is a temp object(doesn't have a name), how to take an alias of it'name
    // CE-Msg: pass because it's const
    const string &ref2 = "ahmed";

    /*-------------------------*/
    /*
    CE_Msg: error: cannot bind
    `non-const lvalue reference` of type std::__cxx11::string&
    to
    an `rvalue` of `std::__cxx11::string`
    */
    // string &ref3 = "ahmed";

    /*-------------------------*/

    /*
    My-ans: error because pointer takes an known address
    CE-Msg: can't convert 'const char*' to 'int*' in initialization
    */
    // int *p1 = "ahmed";
    // char *p1 = "ahmed";   // pass with warning ISO C++ forbids converting a string to char*
    // string *p1 = "ahmed"; // error: cannot convert 'const char*' to 'std::__cxx11::s   antics> g++ -g .\01_value_category\01_which_line_compiles.cpptring*' {aka 'std::__cxx11::basic_string<char>*'} in initialization
    // int *p1 = &salary; // pass
    // int *p1 = &ref1; // pass

    /*-------------------------*/
    // ++salary = 20; // pass
    // salary++ = 40; // error: lvalue required as left operand of assignment
    /*-------------------------*/

    int arr[]{1, 2, 3, 4}; // pass
    // arr = &salary; // error: incompatible types in assignment of 'int*' to 'int [4]'

    /*-------------------------*/

    int *p = arr; // pass
    /*-------------------------*/
    /*
    My-Msg: can't assign address in address
    CE-Msg: error: lvalue required as left operand of assignment

    // p + 1 = arr;
    */
    *(p + 1) = 10; // pass
    p = &salary;   // pass

    /*-------------------------*/

    /*
    CE-Msg: error: lvalue required as unary & operand
    // p = &(salary + 1); // pass
    */

    /*-------------------------*/
    /*
    CE: error: lvalue required as left operand of assignment operator

    // &salary = 40;
    // &salary = p; same as above
    */

    return 0;
}