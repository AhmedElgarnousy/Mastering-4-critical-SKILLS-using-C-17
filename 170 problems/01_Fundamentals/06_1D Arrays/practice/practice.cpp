#include <iostream>

using namespace std;


int main()
{
/******************************************************************
*       Find the maximum value and the second largest value       *
******************************************************************/

/*
  // int ArrOfNums[6] = {5, 10, 20, 3, 30, 7};
  int ArrOfNums[6] = {5, 10, 30, 3, 30, 7};
  int maxNum = ArrOfNums[0];
  int secondMaxNum = 0, index;

  // get the first max one and it's index 
  for(int i = 0; i <= 5; i++ )
  {
    if(maxNum <= ArrOfNums[i])
    {
         maxNum = ArrOfNums[i];
         index = i;
    }
  }

 // get the second max one 
  for(int i = 0; i <= 5; i++ )
  {
    if( (secondMaxNum <= ArrOfNums[i]) && (i != index))
    {
         secondMaxNum = ArrOfNums[i];
    }
  }
  cout<<maxNum <<" "<< secondMaxNum;
*/


/**************************************************************************
*       Practice: Find the pair of values Making the sum is maximum       *
**************************************************************************/

/*
// pair or table or row means 2 for loops

// you can loop with idx 0 with all numbers and then idx 1 with all numbers and so on (inefficient), brootforce(try everything)
// you can find the 2 max numbers and sum them (efficient)

int arrOfint[]= {5,2,10,55,50,15};

int idx1 = 0, idx2 = 1;

for(int i = 0; i <= 5; i++)
{
  for(int j = i+1; j<= 5; j++)
  {
  if(arrOfint[idx1] + arrOfint[idx2] < arrOfint[i] + arrOfint[j] )
    {
        idx1 = i;
        idx2 = j;
    }
  }
}
int sum = arrOfint[idx1] + arrOfint[idx2];
  cout<<sum;

*/


/**************************************************************************
*                     Practice: Reverse in-Place                          *
**************************************************************************/

//  int n, arr[5];
//  cin>>n;

//  for(int i = 0; i< n; i++)
//  {
//   arr[i] = i;

//  }

/*
const int n = 4;
int arr[]= {1,2,3,4};
int temp;

for(int i = 0; i < n /2; i++){
  int last = n - i -1;
  // swap positions: i and last
  temp = arr[i];
  arr[i] =arr[last];
  arr[last] = temp;
}

//print the arr after reversing
for(int i = 0; i< n; i++)
{
  cout<<arr[i];
}

*/

/**************************************************************************
*              Practice: Find the most frequent Number                    *
**************************************************************************/

/*
int numbers[8]={1,5,5,5,1,1,5,5};
int repeat = 0;
int lastRepeat = 0;

for(int i = 0; i<8; i++){
  repeat = 0;
  for(int j = 0; j < 8 ; j++){
    if(numbers[i] == numbers[j]){
      repeat ++;
    }
    if( i == 1)
    {
      lastRepeat = repeat;
    }
    if(lastRepeat < repeat)
      lastRepeat = repeat;
  }
   
  // if(lastRepeat < repeat)
  // {
  //   lastRepeat = repeat;
  // }
}
cout<<lastRepeat;
*/

/**************************************************************************
*              Practice: Frequent Array:  use its value as index                  *
**************************************************************************/



  return 0;
} 