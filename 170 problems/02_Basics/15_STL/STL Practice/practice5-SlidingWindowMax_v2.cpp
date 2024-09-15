#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int max_que(queue<int>q)
{
    int max {0};
    while(!q.empty())
    {
        if(q.front() > max)
            max = q.front();
        q.pop();
    }
    return max;
}

int main()
{
    int arr[8] {1 ,3 ,-1 ,-3, 5, 3, 6, 7}; // array window
    vector<int>res_max;
    queue<int>que;
    int cnt = 6;
    
    que.push(arr[0]);
    que.push(arr[1]);
    que.push(arr[2]);

    int added = 3;
    
    int maxOfQueue;
    while(cnt--)
    {
        maxOfQueue = max_que(que);
        res_max.push_back(maxOfQueue);
        que.pop();
        que.push(arr[added++]);
    }
    
    // print the result vector
    for(auto &val: res_max)
        cout<<val<<" ";
    
    cout<<"\n";
    
    return 0;
}