#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &vec)
{
    for(auto &val: vec)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
}


int main()
{
    vector<int> v(5);

    // fill the vector
    for(int i = 0; i <(int)v.size(); i++)
        v[i] = 10 -i;
    
    print(v); // 10 9 8 7 6

    // the sort algorithm
    sort(v.begin() +1, v.end());
    print(v); // 10 6 7 8 9
    
    sort(v.begin(), v.end());
    print(v); // 6 7 8 9 10 

    sort(v.rbegin(), v.rend());
    print(v); // 10 9 8 7 6 

    // the reverse algorithm
    reverse(v.begin(), v.end());
    print(v); //  6 7 8 9 10 

    v.clear(); // now empty vector
    print(v); 

    return 0;
}