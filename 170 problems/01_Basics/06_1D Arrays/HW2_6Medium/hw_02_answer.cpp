#include <iostream>

using namespace std;
/*********************************************************************************
* 						   Medium: Problem #2: Search for a Number               *
/********************************************************************************/

    /*
	Section: 1D_Array.
	Description: Problem #2: Search for a number
	Level: Medium Challenge
	*/

int main()
{
	int N, Q;
    cout<<"Enter fake array size: ";
    cin>>N;

    int arr[10];
    int queries[10];

    int queries_last_occurence[10] {-1};


   for(int i = 0; i< N; i++)
        cin>>arr[i];

   for(int i = 0; i< N; i++)
        queries_last_occurence[i] =-1;


    cout<<"Enter a number of queries: ";
    cin>>Q;

   for(int i = 0; i< Q; i++)
        cin>>queries[i];

    
    for(int i = 0; i < Q; i++)
    {   
        for(int j = 0; j < N; j++)
        {
            if(queries[i] == arr[j])
                queries_last_occurence[i] = j; 
        }
    }
    
    for(int i = 0; i < Q; i++)
    {
        cout<<queries_last_occurence[i]<<"\n";
    }
    
    
    
    return 0;
}