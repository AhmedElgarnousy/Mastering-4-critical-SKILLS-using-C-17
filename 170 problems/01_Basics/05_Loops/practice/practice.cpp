#include<iostream>

using namespace std;

/************************************************************
*                    Practice Code                          *
************************************************************/

int main()
{

/************************************************************
*                    Fibonacci Sequence                     *
************************************************************/
/*
int a {0}, b {1};

cout<<a<<" "<<b<<" ";

for(int i = 2; i < 10; i++)
{
  int c = a + b;
  a = b;
  b = c;

cout<<c<<" ";
}
*/

/************************************************************
*                    Pair Of Numbers                        *
************************************************************/

// every pair means u need 2 for loops 
// every triple means u need 3 for loops

/*
int num_n, num_m, sum, pairs{0};
cin>>num_n>>num_m>>sum;

for (int i = 1; i< num_n ; i++)
{
  for (int j = 1; j< num_m; j++)
  {
    if(i + j == sum)
    {
      pairs ++;
    }
  }
}
cout<<pairs;
*/

/************************************************************
*                    Triples Of Numbers                     *
************************************************************/
int num_n, num_m, num_w, pairs{0};
cin>>num_n>>num_m>> num_w;

for (int i = 1; i<= num_n ; i++)
{
  for (int j = i; j <= num_m; j++)
  {
    for (int K = 1; K<=  num_w; K++)
    {
      if(i+j <= K)
      {
        pairs ++;
      }
    }
  }
}
cout<<pairs;


/*
// optimize your code by delete 1 for loop
int num_n, num_m, sum, pairs{0};
cin>>num_n>>num_m>>sum;

for (int i = 1; i< num_n ; i++)
{
    int  j = sum -i;
  
    if(j >= 1 && j <= num_m)
    {
      pairs ++;
   }
}
cout<<pairs;
*/

/*
  int num;
  cin>>num;
  
  int temp_num = num;
  int Digits {0};
   
   if(num == 0)
      Digits = 1; 
   else if (num == -2147483648)
      Digits = 10; 
   else {
      if(num < 0)
        num =-num;
   while (num > 0 ){
    Digits ++;
    num = num / 10;
    }
  }
   cout<<"# of digits of " <<temp_num<<" is "<<Digits;
 
  */


 /*
    // To run test cases 
  int T;
  cin>>T;

  while (T > 0) {
    int num;
    cin >> num;

    int sum = 0;
    int start = 1;

    while (start <= num){

      sum += start;
      start++;
    }
    --T;
    cout<<"sum from 1 to "<< num << " = "<< sum <<"\n";
  }
 */
 
  return 0;
}