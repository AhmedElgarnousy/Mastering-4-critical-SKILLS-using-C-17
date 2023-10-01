#include <iostream>

using namespace std;



/****************************************************
                    * Practice*
****************************************************/

int main()
{

/****************************************************
                    * 2D Array  *
****************************************************/


/****************************************************
                    * define 2D Array  *
****************************************************/

/*
int val[3][4]{
  {8, 16, 9, 52},
  {3, 15, 27, 6},
  {14, 25, 2, 10}
};

// print 2D Array
for(int i = 0; i<3; i++ )
{
  cout<<"row"<< i<<": ";
  for(int j = 0; j<4; j++)
  {
        cout<<val[i][j]<<" ";

  }
  cout<<"\n";
}
*/


/****************************************************
          * Reading and printing the array *
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
          * Column Row Order *
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
     * Position Neighbors on Matrix/Grid/2D Array *
*********************************************************/


// Four Neighbors 
/*
int x, y;
cout<<"enter x and y: ";
cin>>x>>y;

// up, down, right, left
int Arr_X[4]{0,0,1,-1};
int Arr_Y[4]{1,-1,0,0};

for( int i = 0; i< 4; i++)
{
  cout<<"("<< x + Arr_X[i] <<","<< y + Arr_Y[i]<<") , ";
}
*/

/*********************************************************
                       *Practice: Max Value of 2D Array*
*********************************************************/

/*
int rows, cols;
cin>>rows>>cols;

int Matrix[rows][cols];
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
      cin>>Matrix[i][j];
  }
}

int maxVal = Matrix[0][0]; // you can use max index in accessing instead to values
int rowIdx, colIdx;
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
    if(maxVal <= Matrix[i][j])
    {
      maxVal = Matrix[i][j];
      rowIdx = i;
      colIdx = j;
    }
  }
}
cout<<"The maximum value is at position "<<rowIdx<<" "<<colIdx<<"(with a value of)"<<maxVal;
*/

/*********************************************************
             *   Practice:special Print   *
*********************************************************/
// sum of the left-diagonal(from the upper-left position diagonally down)
// sum of the right-diagonal(from the upper-right position diagonally down)
// sum of the final row
// sum of the final column

/*
int rows, cols;
cin>>rows>>cols;
int sumOfleftDiagonal {0};
int sumOfRightDiagonal {0};
int sumOfFinalRow {0};
int sumOfFinalColumn {0};

//Reading the 2D Array 
int Matrix[rows][cols];
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
      cin>>Matrix[i][j];
  }
}
//Looping for the  2D Array to special print
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
    // left diagonal
    if(i == j)
      {
        sumOfleftDiagonal += Matrix[i][j];
      }
    // right diagonal
    if(i + j == cols-1)
      {
        sumOfRightDiagonal += Matrix[i][j];
      }
    // final row
    if(i  == rows-1)
      {
        sumOfFinalRow += Matrix[i][j]; 
      }
    // final row
    if(j  == cols-1)
      {
        sumOfFinalColumn += Matrix[i][j];
      }
  }
}
cout<<"\nleft diagonal is: "<<sumOfleftDiagonal;
cout<<"\nright diagonal is: "<<sumOfRightDiagonal;
cout<<"\nfinal row is: "<<sumOfFinalRow;
cout<<"\nfinal col is: "<<sumOfFinalColumn;
*/

/*********************************************************
             *   Practice:Swapping 2 columns  *
*********************************************************/
/*
int rows, cols;
cin>>rows>>cols;
int tempCol[3];

//Reading the 2D Array 
int Matrix[rows][cols];
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
      cin>>Matrix[i][j];
  }
}

int c1, c2;
cin>>c1>>c2;

for(int i = 0; i<rows ; i++)
{
  tempCol[i] = Matrix[i][c1];
  Matrix[i][c1]= Matrix[i][c2];
  Matrix[i][c2]= tempCol[i];

}

// print the new array
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
    cout<<Matrix[i][j]<<" ";
  }
    cout<<"\n";
}
*/

/*********************************************************
             *  Practice2 :Greedy Robot  *
*********************************************************/

/*
// sol 1
int rows, cols;
cin>>rows>>cols;
for(int i = 0; i < rows; ++i)
  for(int j = 0; j < cols; ++j)
    cin>>arr[i][j];

int i = 0, j = 0, sum = 0;
while(i< rows && j< cols){
  sum += arr[i][j];

  int next_val, best_i = -1, best_j = -1;

  // is right ok position
  if(j + 1 < cols)
    next_val = arr[i][j + 1], best_i = i, best_j = j +1;

  // is down ok position?
  if(i + 1 < rows){
    if(best_i == -1 || next_val < arr[i +1][j]){
        next_val = arr[i+1][j], best_i = i +1, best_j = j;
    }
  }
  // is diagonal ok position?
  if(i + 1 < rows && j + 1 < cols){
    if(best_i == -1 || next_val < arr[i+1][j+1])
    {
      next_val = arr[i+1][j+1], best_i = i +1, best_j = j+1;
    }

    if(best_i == -1)
    {
      break;
    }
    i = best_i, j = best_j;

  cout<<<sum<<"\n";
  } 
  */
 

 //  better solution by directional array(shorter version)
 //Reading the 2D Array 
 /*
int rows, cols;
cin>>rows>>cols;
int Matrix[rows][cols];
for(int i= 0; i < rows; i++)
{
  for(int j= 0; j < cols; j++)
  {
      cin>>Matrix[i][j];
  }
}

int dx [3] {0,1,1};
int dy [3] {1,0,1};

int NextStep = Matrix[0][0];
int newXIdx = 0, newYIdx = 0;

while (Matrix[newYIdx][newYIdx] != Matrix[rows-1][cols-1])
{
  // for loop for the next step == choose the maximum value
  for(int i= 0; i < 3; ++i) // 3 == #of possible positions (Right, Left, Diagonally down )
  {
    if(NextStep < Matrix[dx[i] + newXIdx][dy[i] + newYIdx])
    {
      newXIdx = dx[i] + newXIdx;
      newYIdx = dy[i] + newYIdx;
      NextStep = Matrix[newYIdx][newYIdx];
      cout<<NextStep<<"\n";
    }
  }
}

cout<<Matrix[newYIdx][newYIdx]<<"\n";
 */

/*********************************************************
         *  Practice2 : Flattening an Array  *
*********************************************************/





  return 0;
}