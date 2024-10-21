#include <iostream>
#include <vector>
#include <memory>   // smart pointers
#include <string.h> // memset

using namespace std;

void test1()
{
    int n = 5;
    unique_ptr<int[]> p1{new int[n]};
    unique_ptr<int[]> p2{new int[n]()};
    unique_ptr<int[]> p3 = make_unique<int[]>(n);

    /*
        Always use make_unique
        Are they same? NO :)
        p1 created memory and did not initialize (faster)
        p2 and p3 initialize to 0 [safe / slower]
        In Practice: STL: vector/array are enough typically

    */
    for (int i = 0; i < n; i++)
    {
        p1[i] = 7;
    }
}
void test2()
{
    /*
        // BE Carefull : undefined behaviour for freeing memory
        // unique_ptr<int> p{new int[5]};
        *p = 10;
    */
    unique_ptr<int[]> p{new int[5]};
    p[0] = 10;
    // *p = 10; //CE: only here [] operator
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " \n";
    }
}

void fast_initialize_using_memset()
{
    int n = 1000000; // int typically 4 byte 2^32 = 4 billion
    unique_ptr<int[]> p1 = make_unique<int[]>(n);

    int *ptr = p1.get();

    // in integer use memset only with 0 and 1
    memset(ptr, -1, n * sizeof(int)); // or sizeof(n)

    char str[] = "hello";
    cout << str << "\n";
    memset(str, 't', sizeof(str)); // tttttt
    cout << str << "\n";
}

int main()
{
    /*
    int arr[6];
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        // cout << arr[i] << " \n";
        // cout << ptr[i] << " \n";
        cout << *(ptr + i) << " \n";
    }
    */
    // test1();
    // test2();
    fast_initialize_using_memset();

    return 0;
}