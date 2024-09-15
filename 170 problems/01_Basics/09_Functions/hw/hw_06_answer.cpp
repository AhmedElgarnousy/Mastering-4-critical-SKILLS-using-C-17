#include <iostream>

using namespace std;
/**************************************************
 * 			 Homework 6: Get nth-prime            *
/*************************************************/

/*
A prime number is greater than 1 AND cannot be formed by 
 multiplying two smaller numbers.
In other words, number%whatever != 0  
    whatever != {number , 1 , 0}  
The first few prime numbers are 
        2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
*/

bool is_prime(int num)
{
  for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int nth_prime(int n){
    int num = 2;
    while(n)
    {
        if(is_prime(num))
            n--;

        num ++;
    }
    return num -1;
}

int main()
{
    cout<<is_prime(2)<<"\n";
    cout<<is_prime(3)<<"\n";
    cout<<is_prime(15)<<"\n";

    cout<<nth_prime(7)<<"\n"; // 17
    cout<<nth_prime(4)<<"\n"; // 7


    return 0;
}