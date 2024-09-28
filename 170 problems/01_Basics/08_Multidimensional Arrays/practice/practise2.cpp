#include <iostream>

using namespace std;

int main()
{


/*******************************************************************************
*     Practice2 :Greedy Robot  (good but not handle the last col or row)       *
*******************************************************************************/

/*
// right, down, diagonally(down and right)
int diff_row[3]{0, 1, 1};
int diff_col[3]{1, 0, 1};

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

int sum = vals[0][0];
int cur_pos[2]  {0, 0};  // row, col
int temp_pos[2]  {0, 0};  // row, col

int nextMaxVal = vals[ cur_pos[0] + diff_row[0] ] [cur_pos[1] + diff_col[0]]; // right pos

while(cur_pos[0] != rows -1 &&  cur_pos[1] != cols -1)
{
  for(int i = 0; i<3; i++)
  {
    if(   nextMaxVal <= vals[ cur_pos[0] + diff_row[i] ] [cur_pos[1] + diff_col[i] ]  )  // distinct values
    {
      nextMaxVal = vals[ cur_pos[0] + diff_row[i] ] [cur_pos[1] + diff_col[i] ];
        temp_pos[0] = cur_pos[0] + diff_row[i]; 
        temp_pos[1] = cur_pos[1] + diff_col[i]; 
    } 
  }
  cur_pos[0] = temp_pos[0];
  cur_pos[1] = temp_pos[1];
    
  sum += nextMaxVal;

  // (cur_pos[0]  == rows -2 && cur_pos[1]   == cols -2 ) // dia
  if((cur_pos[0]  == rows -2 && cur_pos[1]  == cols -1 ) // up
    || (cur_pos[0]  == rows -1 && cur_pos[1]  == cols -2 ) ) // left
  {
    cur_pos[0] = rows -1;
    cur_pos[1] = cols -1;
    sum += vals[rows-1][cols -1];
  }
  nextMaxVal = vals[ cur_pos[0] + diff_row[0] ] [ cur_pos[1] + diff_col[0] ]; // to compore just neibors

  cout<<"nextval: "<< nextMaxVal<<"\n";
  cout<<"nextpos: "<< cur_pos[0]<<","<<cur_pos[1] <<"\n";
}

cout<<"sum: "<<sum<<"\n";
*/

/*
// grid values
10 11 7 1
12 20 50 30
9 19 45 15
*/




/*******************************************************************************
*                  Greedy Robot ->  Dr  Mostafa solutiion                      *
*******************************************************************************/

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
*           Practice2 : Flattening an Array              *
*********************************************************/


/*
int rows, cols;
cout<<"enter # of rows, cols: ";
cin>>rows>>cols;

int vals[rows][cols];
int arr_1D[50];

// fill the 2d array
for(int row = 0; row < rows; row++)
{
  cout<<"enter row "<<row<<" values: ";
  
  for(int col = 0; col < cols; col++)
    cin>>vals[row][col];
}

int idx = 0;

for(int row = 0; row < rows; row++)
{
  for(int col = 0; col < cols; col++)
  {
    cout<< "index "<<idx<<" has r,c = "<<row<<" "<<col<<"\n";
    idx++; 
  }
}
*/

  return 0;
}