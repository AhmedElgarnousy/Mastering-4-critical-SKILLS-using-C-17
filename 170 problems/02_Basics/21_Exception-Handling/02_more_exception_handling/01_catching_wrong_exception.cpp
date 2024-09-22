#include <iostream>

using namespace std;

int * CreateArrayOnMobile(int len)
{
    if(len <= 0)
    {
        throw invalid_argument("Array length value can't be negative or zero!\n");
    }
    if(len > 1000)
    {
        throw runtime_error("Too big array for this mobile memory!\n");
    }

    // Even this internally throws bad_alloc
    return new int [len];
}

int main()
{
    int *p = nullptr;
    try {
       int *p = CreateArrayOnMobile(-10);
    }catch(runtime_error &e) {
        cout<<e.what(); 
    }
    if(p != nullptr) // only if created
    {
        delete[] p;
        p = nullptr;
    }

    return 0;
}