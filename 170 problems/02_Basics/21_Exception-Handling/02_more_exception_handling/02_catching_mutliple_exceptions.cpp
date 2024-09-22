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
    // like if else statments 
    // checks error type match which execption
    int *ptr = nullptr;
    try {
       int *ptrArr = CreateArrayOnMobile(10); 
    }
    catch(invalid_argument &e) {
        cout<<e.what(); 
    }
    catch(runtime_error &e) {
        cout<<e.what(); 
    }
    catch(...) {
        cout<<"Caught unknown execption type!\n"; 
    }
    if(ptr != nullptr) // only if created
    {
        cout<<"mem deleted successfully\n";
        delete[] ptr;
        ptr = nullptr;
    }
    // ptrArr memory leak

    return 0;
}