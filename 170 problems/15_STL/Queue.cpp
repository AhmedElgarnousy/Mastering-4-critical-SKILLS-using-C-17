#include <iostream>
#include <queue>

using namespace std;

struct student
{
    int id;
    string name;
    int age;
    void print_name()
    {
        cout<<name<<"\n";
    }
};

int main()
{
    // queue of integers
    queue<int>  q;
    //fill the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Last element in queue: "<<q.back() <<"\n";

    // printing the queue
    cout<< "queue int elements: ";
    while (!q.empty())
    {
        cout<< q.front() << " ";
        q.pop(); // remove the last element
    }    
    
    cout<<"\n***************\n";

    // queue of strings
    queue<string> q_names;

    q_names.push("embedded_automotive");
    q_names.push("cybercurity");
    q_names.push("machine_learning");
    q_names.push("MERN_stack");

    string name = q_names.front();

    cout<< "queue string elements: ";
    while (!q_names.empty())
    {
        cout<< q_names.front() << " ";
        q_names.pop();
    }
    cout<<"\n***************\n";
    
    // queue of structs
    queue <student> que_student;
    
    student ahmed  {20, "ahmed"};
    student mohamed  {21, "mohamed"};
    student mostafa  {22, "mostafa"};
    student mohand  {23, "mohand"};

    que_student.push(ahmed);
    que_student.push(mohamed);
    que_student.push(mostafa);
    que_student.push(mohand);


     cout<< "queue struct elements: \n";
    while(!que_student.empty())
    {
        cout<<que_student.front().name<<"\n";   
        que_student.pop();
    }
    cout<<"***************\n";
    return 0;
}
