#include <iostream>

using namespace std;

/********************************************************
* 			Easy: Problem #1: Smaller row ?             *
/*******************************************************/

int main()
{

int rows, cols;
cout<<"enter # of rows, cols: ";
cin>>rows>>cols;
int vals[rows][cols];

int query, row1, row2;

// fill the 2d array
for(int row = 0; row < rows; row++)
{
  cout<<"enter row "<<row<<" values: ";
  
  for(int col = 0; col < cols; col++)
    cin>>vals[row][col];
}

cout<<"enter q for queries: ";
cin>>query;

for(int i =0 ; i< query; i++)
{
    cin>>row1>>row2;
    row1 --;  // converty 1 based index to zero based index
    row2 --;
    for(int i = 0; i<cols; i++)
    {
        if(vals[row1][i] > vals[row2][i])
        {
            cout<<"NO"<<"\n";
            break; 
        }

        if(i == cols -1)
        {
            cout<<"YES"<<"\n";
            break;
        }

    }
}

/*
8 16 9 52
3 15 27 6
14 25 29 10
*/

    return 0;
}