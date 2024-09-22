#include <iostream>

using namespace std;

int * CreateArrayOnMobile(int len)
{
    if(len <= 0)
    {
        throw 17; // some error code
    }
    if(len >= 10000)
    {
        throw runtime_error("Too big array for this mobile memory\n");
    }
    return new int [len];
}

int main()
{
    int *ptr = nullptr;
    try {
        int* ptrArr = CreateArrayOnMobile(-10);
    }
    catch(int &error_code) // catch integer
    {
        cout<<"error_code :"<<error_code<<"\n";
    }
    catch(runtime_error &e)
    {
        cout<<e.what();
    }
    catch(...)
    {
        cout<<"Caught unknown execption type\n";
    }

    if(ptr != nullptr) // only if created
    {
        delete[] ptr;
        ptr = nullptr;
    }
    return 0;
}