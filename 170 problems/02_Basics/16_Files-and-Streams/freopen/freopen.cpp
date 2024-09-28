#include<bits/stdc++.h> // for freopen 

/*
    - The easy way to switch a project to read/write from files
    - every cin and cout read from file instead console 
    - Not the professional way
*/

using namespace std;

int main()
{
    freopen("read_file.txt", "rt", stdin);
    freopen("write_file.txt", "wt", stdout);
    int x, y;
    int i, j;
    cin>>x >> y;
    cin>>i >> j;

    cout<<"x + y is: "<<x + y;
    cout<<"\n";
    cout<<i + j;
    cout<<"\n";
    cout<<i;
    cout<<"\n";
    cout<<j;
    return 0;
}