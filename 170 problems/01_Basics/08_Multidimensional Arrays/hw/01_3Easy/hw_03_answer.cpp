#include <iostream>


using namespace std;

/***************************************************************
* 					Easy: Problem #3: Transpose                *
/**************************************************************/

int main()
{
int rows, cols;
cout<<"enter # of rows, cols: ";
cin>>rows>>cols;
int vals[rows][cols];

int transpose[cols][rows];

// fill the 2d array
for(int row = 0; row < rows; row++)
{
  cout<<"enter row "<<row<<" values: ";

  for(int col = 0; col < cols; col++)
    cin>>vals[row][col];
}

// transpose the matrix
for(int row = 0; row < rows; row++)
{
  for(int col = 0; col < cols; col++)
    transpose[col][row] = vals[row][col];
}

  cout<<"\n";

// print the 2d array
for(int row = 0; row < cols; row++)
{
  for(int col = 0; col < rows; col++)
    cout<<transpose[row][col]<<" ";
  
  cout<<"\n";
}

/*
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
*/

    return 0;
}