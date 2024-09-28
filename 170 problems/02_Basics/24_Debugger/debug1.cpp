#include <iostream>
#include <vector>
#include <map>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;

    // return n * factorial(n - 1);
    int ret = factorial(n - 1);
    ret *= n;
    return ret;
}

int sum_square(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        double xx = arr[i] * arr[i];
        sum += xx;
    }
    return sum;
}

int main()
{
    int arr[] = {2, 3, 4};

    int res = sum_square(arr, 3);

    arr[1] = 100;

    vector<int> v{2, 3, 4};
    v.push_back(7); // let's step into

    cout << factorial(5);

    return 0;
}