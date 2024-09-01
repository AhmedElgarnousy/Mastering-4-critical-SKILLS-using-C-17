#include <iostream>

using namespace std;

// static vars and global vars with templates

int global_var = 0;

template <typename Type>
void increment_me(Type x)
{
    static int i = 0;
    cout<< ++i << " "<< ++global_var <<"\n";
    return;
}

int main()
{

    increment_me(5); // 1 1
    increment_me(5); // 2 2
    increment_me(5); // 3 3

    increment_me(2.4); // 1 4
    increment_me(2.4); // 2 5
    increment_me(2.4); // 3 6

    return 0;
}