#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int fixedArr [SIZE] {0};

    int n = 20;
    int *dynamicArr = new int[n];

    for(int i = 0; i < n; i++){
        dynamicArr[i] = i;
        cout<<dynamicArr[i]<<" ";
    }

    delete[]  dynamicArr; // free the array

    //WROOOOONG and will compile
    // delete dynamicArr;

    return 0;
}