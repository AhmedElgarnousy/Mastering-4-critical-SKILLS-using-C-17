#include <iostream>
#include <vector>

using namespace std;
/*
//Homework 1: Adding vectors
- Extend the functionalility of vector<int>
    to allow adding 2 vectors
- The smaller vector in length is added
    to the large vector
    - Large[i]+=small[i]
*/

vector<int> operator+(const vector<int> &v1, const vector<int> &v2)
{
    // vector<int> res(v1.size(), 0);
    vector<int> res;
    for (int i = 0; i < (int)v1.size(); i++)
    {
        res.push_back(v1[i] + v2[i]);
    }
    return res;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {10, 20};
    vector<int> c = a + b;

    for (int i = 0; i < (int)c.size(); ++i)
    {
        cout << c[i] << " "; // 11 22 3 4
    }
    cout << "\n";

    return 0;
}