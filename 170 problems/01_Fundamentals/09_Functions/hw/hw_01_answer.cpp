#include <iostream>

using namespace std;

/*************************************************
 * 			Homework 1: Max of 6 numbers         *
/************************************************/



int max(int a, int b, int c) {
    if(a > b && a > c)
        return a;
    if(b > a && b > c)
        return b;
    
    return c;
}

int max(int a, int b, int c, int d)
  {
    int num1 = max(a, b, c);
    if(num1 > d)
        return num1;
    return d;
}

int max(int a, int b, int c, int d, int e ){
    int num1 = max(a, b, c);
    return max(d, e, num1);
}

int max(int a, int b, int c, int d, int e, int f) {
    int num1 = max(a, b, c);
    int num2 = max(d, e, f);
    
    if(num1 > num2)
        return num1;
    return num2;
}


int main()
{
    cout<<max(111, 12 , 14, 99, 100)<<"\n";
    return 0;
}
/*
*/