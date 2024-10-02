#include <iostream>
using namespace std;

/*
//Homework 4: MyVector
● We already coded this before
● Consider following enhancements

● 1) Provide Copy Constructor
● 2) In get method, make sure no out of index access
● 3) provide set method to change array content
● 4) method to get array length
*/

class MyVector
{
private:
    int *arr;
    int len = 100;

public:
    MyVector(int len, int default_value = 0)
    {
        this->len = len;
        this->arr = new int[len];
        for (int i = 0; i < len; i++)
        {
            this->arr[i] = default_value;
        }
    }
    // copy constructor
    MyVector(const MyVector &another)
    {
        len = another.len;
        this->arr = new int[len];

        for (int i = 0; i < len; i++)
        {
            arr[i] = another.arr[i];
        }
    }
    int getLen() const
    {
        return len;
    }
    ~MyVector()
    {
        delete[] this->arr;
        arr = NULL;
    }
    int Get(int pos)
    {
        if (!(pos < 0 || pos >= len))
            return this->arr[pos];
        return -1; // invalid access
    }
    void Set(int pos, int val = 0)
    {
        if (pos < len)
            this->arr[pos] = val;
        else
            cout << "Invalid access\n";
    }
};

int main()
{
    MyVector v(10, 12345);
    MyVector v2(v);

    v2.Set(12000);
    return 0;
}