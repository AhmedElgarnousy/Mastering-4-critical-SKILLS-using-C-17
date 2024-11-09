#include <iostream>


using namespace std;
/*************************************************************
 * 			Easy: Problem #2: Triangular matrix              *
/************************************************************/

int main()
{
int squLen;
cout<<"enter # of rows, cols: ";
cin>>squLen;
int vals[squLen][squLen];

int lower_trainagle = 0, upper_trainagle = 0;

// fill the 2d array
for(int row = 0; row < squLen; row++)
{
  cout<<"enter row "<<row<<" values: ";
  
  for(int col = 0; col < squLen; col++)
    cin>>vals[row][col];
}
for(int i =0; i < squLen; i++)
{
    for(int j = 0; j < i+1; j++ ){
        lower_trainagle +=vals[i][j];
    }
}

for(int i =0; i <squLen ; i++)
{
    for(int j = squLen -1; j >=i; j-- ){
        upper_trainagle +=vals[i][j];
    }
}
cout<<lower_trainagle<<"\n";
cout<<upper_trainagle<<"\n";

    return 0;
}
/*
8 16 9
3 15 27
14 25 29
*/