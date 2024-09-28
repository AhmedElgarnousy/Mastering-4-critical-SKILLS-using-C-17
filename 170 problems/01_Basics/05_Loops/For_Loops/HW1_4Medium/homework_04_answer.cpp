#include <iostream>
using namespace std;

int main()
{
    /***********************************************************************
    *                  Medium: Problem #4: Print Primes                    *
    /**********************************************************************/

    int num;
    cout << "Enter N less than 500: ";
    cin >> num;
    while (num--)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                break;

            if (i == num - 1)
                cout << num << " ";
        }
    }
    cout << 2 << " ";

    return 0;
}