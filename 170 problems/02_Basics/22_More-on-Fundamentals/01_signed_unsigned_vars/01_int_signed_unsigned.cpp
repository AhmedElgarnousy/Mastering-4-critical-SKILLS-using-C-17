#include <iostream>
#include <climits> // for const limits like INT_MAX
using namespace std;

int main()
{

    int int_var1 = -10;
    signed int int_var2 = -10; // Exactly same

    cout<<int_var2<<": "<<sizeof(int_var1)<<"Bytes\n"; // -10: 4 bytes

    cout<<INT_MIN<<" "<<INT_MAX<<"\n"; // -2147483648 2147483647

    int_var1 = 2147483647 + 1; // overflow ==> -2147483648
    cout<<int_var1<<"\n";

    unsigned int int_var3 = UINT_MAX; // no UINT_MIN
    cout<<int_var3<<"\n"; // 4294967295

    ++int_var3;
    cout<<int_var3<<"\n"; // overflow ==> 0

    int_var3 = -1; // note this unsigned
    cout<<int_var3<<"\n"; // underflow ==> 4294967295

     int_var3 = -2; // note this unsigned
    cout<<int_var3<<"\n"; // underflow ==> 4294967294 [circulate]


    return 0;
}