#include <iostream>
#include <vector>

using namespace std;


void slidingWindow(){
int arr[8] {1 ,3 ,-1 ,-3, 5, 3, 6, 7};

vector<int>res_max;
int arr[8] {1 ,3 ,-1 ,-3, 5, 3, 6, 7};

vector<int>res_max;

    int arr[8] {1 ,3 ,-1 ,-3, 5, 3, 6, 7}; // array window
    vector<int>res_max;

    int max {0};

    for(int i = 0; i < 6; i++)
    {
        // get the max of 3 valuesv
        for(int j =i; j < i + 3; j++ )
        {
            if(max <= arr[j])
                max = arr[j];
        }
        res_max.push_back(max);
        max =0;
    }
    // print the result vector
    for(auto &val: res_max)
        cout<<val<<" ";
    
    cout<<"\n";
    }

int main()
{
    

    return 0;
}