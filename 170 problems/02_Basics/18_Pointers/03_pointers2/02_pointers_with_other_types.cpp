#include<iostream>
#include<vector>

using namespace std;

int main()
{
    double x = 10;
    double * ptr = & x;

    string str = "Ahmed";
    string* ptr2 = &str;
    *ptr2 = "ahmedkamal";
    cout<<str<<'\n'; // ahmedkamal

    vector<int>v {5,6,7};
    cout<<v.size()<<"\n";
    vector<int>* ptr3 = &v;
    *ptr3 = vector<int> (10);
    cout<<v.size()<<"\n";

    /*
     note1: the size of ptr1, ptr2, and ptr2 are the same,
     size is the address of your machine memory 
    */
    /*
     note2: key difference between refernce and pointers
     that the pointers allows dynamic memory allocations 
    */
    //More next on arrays

    return 0;
}