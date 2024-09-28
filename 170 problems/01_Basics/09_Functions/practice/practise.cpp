#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;

/****************************************************
                    * Practice Functions*
****************************************************/
  int our_abs(int x){
    if(x >= 0)
      return x;
    return -x;

  }
/****************************************************
          * Functions with default values *
****************************************************/

int our_pow(int n, int p = 3)
{
  int result = 1;

  while (p--){
    result *= 2;
  }
return result;
}


// function to check if the string is lower or not
bool is_lower(const string &str)
{
  for(int i = 0; i< str.size(); ++i)
    if(!islower(str[i]))
        return false;
  return true;
}

void changeByValandRef(int a_val, int &b_ref )
{
  a_val++;
  b_ref ++; 
}


int sum_array(int *arr, int len)
{
  int sum = 0;
  for(int i= 0; i< len; ++i)
    sum += arr[i];

  return sum;
}

int main()
{
  /*
  cout<<our_abs(-5)<<"\n";
  cout<<our_pow(2)<<"\n";
  cout<<our_pow(2,3)<<"\n";
  cout<<our_pow(2,4)<<"\n";
  */

/****************************************************
               * Built in Functions  *
****************************************************/
/*
  cout<<abs(- 2)<<"\n";
  cout<<fabs(-2.4)<<"\n";
  cout<<ceil(2.4)<<"\n";
  cout<<floor(2.4)<<"\n";
  cout<<round(2.4)<<"\n";
  cout<<round(2.5)<<"\n";
  cout<<round(2.6)<<"\n";
  cout<<round(-2.6)<<"\n";
  cout<<round(-2.4)<<"\n";     // ** TRICKY 
  cout<<floor(-2.4)<<"\n";     // ** TRICKY
  cout<<sqrt(16)<<"\n";
*/

  // FOR Letters
  /*
  cout<<isalpha('A')<<"\n";
  cout<<isalpha('#')<<"\n";
  cout<<isdigit('3')<<"\n";
  cout<<isdigit('A')<<"\n";
  cout<<isupper('A')<<"\n";
  cout<<isupper('a')<<"\n";
  cout<<(char)tolower('X')<<"\n";
  cout<<(char)toupper('X')<<"\n";

  cout<<max(5, 9)<<"\n";
  cout<<pow(2, 4)<<"\n";
  cout<<pow(2, 4.1)<<"\n";
  cout<<log2(16)<<"\n";
  cout<<log10(1000)<<"\n";


  cout<<(double)rand() / RAND_MAX<<"\n";
  */

/*
 cout<< is_lower("abc");
 cout<< is_lower("aBc");
*/

/*
int a = 10, b = 11;
cout<<a<<" "<<b<<"\n";
changeByValandRef(a, b);

cout<<a<<" "<<b;
*/


int arr[6] = {1,2,3,4,5,6};

cout<<sum_array(arr, 4);


  return 0;
}