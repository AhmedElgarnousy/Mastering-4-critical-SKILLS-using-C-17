#include <iostream>

using namespace std;

/*
Section: 	DataTypesAndVariables.cpp .
Description:Problem #1: Swapping 3 numbers
            Write a code to swap 3 numbers
             Let say we have numbers a = 115, b = 20, c = 301
             We wanna their final values to be: a = 20, b = 301, c = 115
             Challenge: Do it in 4 lines

Level: 		Hard Challenge
*/
int main()
{
    int num1, num2, num3, temp = -1;

    cin >> num1 >> num2 >> num3;
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;
    cout << num1 << " " << num2 << " " << num3 << '\n';

    return 0;
}