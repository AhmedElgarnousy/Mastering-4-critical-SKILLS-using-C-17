#include <iostream>
using namespace std;


/*
    The 3n+1 sequence calculated as follows
    if num is even, the next num in sequence n /2
    if num is odd, the next num in sequence 3n+1
    until reach to 1 end of the sequence
*/

void seq_3n_plus_1(int num)
{
    cout<<num<<" ";
    if (num == 1)
        return;

    if(num %2 == 0)
        seq_3n_plus_1(num/2);
    else
        seq_3n_plus_1(3*num+1);
}
int main()
{
    seq_3n_plus_1(5);
    cout<<"\n";
    seq_3n_plus_1(7);
    return 0;
}