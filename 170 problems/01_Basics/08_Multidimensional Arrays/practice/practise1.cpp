#include <iostream>

using namespace std;


int main()
{




  
// print the 2d array
/*
for(int row = 0; row < rows; row++){

  cout<<"enter row "<<row<<":";
  for(int col = 0; col < cols; col++)
    cout<<vals[row][col]<<" ";
  
  cout<<"\n";

}
*/



//define 2D Array
/*
int val[3][4]{
  {8, 16, 9, 52},
  {3, 15, 27, 6},
  {14, 25, 2, 10}
};



// print 2D Array
for(int i = 0; i<3; i++ )
{
  cout<<"row "<<i<<": ";
  for(int j = 0; j<4; j++)
        cout<<val[i][j]<<" ";
  cout<<"\n";
}
*/


/****************************************************
*           Reading and printing the array          *
****************************************************/

/*
int grades[7][4];
for(int row = 0; row < 7; ++row ){
  for(int col = 0; col < 4; ++col)
  {
      cin>>grades[row][col];
  }
}

for(int row = 0; row < 7; ++row ){
   cout<<"row"<< row<<": ";
  for(int col = 0; col < 4; ++col)
  {
      cout<<grades[row][col]<<" ";
  }
  cout<<"\n";
}
*/

/****************************************************
*               Column Row Order                    *
****************************************************/
/*
int grades[7][4] {0};

for(int col = 0; col < 4; ++col ){
   cout<<"col"<< col<<": ";
  for(int row = 0; row < 7; ++row)
  {
      cout<<grades[row][col]<<" ";
  }
  cout<<"\n";
}
*/

/*********************************************************
*      Position Neighbors on Matrix/Grid/2D Array        *
*********************************************************/


// Four Neighbors 
/*
int row, col;
cout<<"enter row and col: ";
cin>>row>>col;

// up, down, right, left
int row_diff[4]{-1, 1, 0 , 0};
int col_diff[4]{0, 0, -1 , 1};

for(int i = 0; i<=3; i++)
  cout<<"("<< row + row_diff[i]<<","<<col + col_diff[i]<<")"<<"\n";

*/

/*********************************************************
*             Practice: Max Value of 2D Array            *
*********************************************************/

/*
int rows, cols;
cout<<"enter # of rows, cols: ";
cin>>rows>>cols;

int vals[rows][cols];

// fill the 2d array
for(int row = 0; row < rows; row++)
{
  cout<<"enter row "<<row<<" values: ";
  
  for(int col = 0; col < cols; col++)
    cin>>vals[row][col];
}

int maxVal = vals[0][0];
int rIdx, cIdx;


for(int row = 0; row < rows; row++)
  for(int col = 0; col < cols; col++)
    if(vals[row][col] >= maxVal){   // >= to get the last element
      maxVal = vals[row][col];
      rIdx = row;
      cIdx = col;
    }

cout<<"the max value at pos "<<rIdx<< " "<<cIdx<<" with the value "<<maxVal<<"\n";

*/

/*********************************************************
*               Practice:special Print                   *
*********************************************************/

/*
int rows, cols;
cout<<"enter # of rows, cols: ";
cin>>rows>>cols;

int vals[rows][cols];

// fill the 2d array
for(int row = 0; row < rows; row++)
{
  cout<<"enter row "<<row<<" values: ";
  
  for(int col = 0; col < cols; col++)
    cin>>vals[row][col];
}

int leftDiagonal = 0, rightDiagonal = 0, sumFinalRow = 0, sumFinalCol = 0;

for(int row = 0; row < rows; row++)
  for(int col = 0; col < cols; col++){
    if (row == col)
      leftDiagonal +=vals[row][col];
    
    if (row + col == cols-1)
      rightDiagonal +=vals[row][col];
    
    if (col == cols-1)
      sumFinalCol +=vals[row][col];
    
    if (row == rows-1)
      sumFinalRow +=vals[row][col];   
  }

cout<<leftDiagonal<<" "<< rightDiagonal<<"\n";
cout<<sumFinalRow<<" "<< sumFinalCol;

*/

/*********************************************************
*             Practice:Swapping 2 columns                *
*********************************************************/
/*
int rows, cols, colIdx1, colIdx2;
cout<<"enter # of rows, cols: ";
cin>>rows>>cols;

int vals[rows][cols];

// fill the 2d array
for(int row = 0; row < rows; row++)
{
  cout<<"enter row "<<row<<" values: ";
  
  for(int col = 0; col < cols; col++)
    cin>>vals[row][col];
}

// enter 2 indices
cout<<"enter row idx, col idx: ";
cin>>colIdx1>>colIdx2;
int swap;


// swap 2 cols
for(int i = 0 ; i < rows; i++)
{
  swap = vals[i][colIdx1];
  vals[i][colIdx1] = vals[i][colIdx2];
  vals[i][colIdx2] = swap;
}  


// print the 2d array
for(int row = 0; row < rows; row++){

  cout<<"enter row "<<row<<":";
  for(int col = 0; col < cols; col++)
    cout<<vals[row][col]<<" ";
  
  cout<<"\n";

}
*/

  return 0;
}