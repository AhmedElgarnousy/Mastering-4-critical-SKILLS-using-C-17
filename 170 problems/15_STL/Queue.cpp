#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int>  q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Last element in queue: "<<q.back() <<"\n";

    cout<< "queue int elements: ";
    while (!q.empty())
    {
        cout<< q.front() << " ";
        q.pop();
    }
        
        cout<<"\n***************\n";


        queue<string> q_names;

        q_names.push("ahmed");
        string name = q_names.front();

    // cout<< "queue int elements: ";
    // while (!q_names.empty())
    // {
    //     cout<< q.front() << " ";
    //     q.pop();
    // }
    //     cout<<"***************\n";
        
    

    return 0;
}
