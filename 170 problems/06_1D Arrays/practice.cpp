#include <iostream>

using namespace std;

const int size{5};

int main()
{
  int Numbers[size] = {1,5,4,8};
  for(int i = size -1 ; i >= 0; i--)
  {
    cout<<Numbers[i]<<"\n";

  }

  return 0;
}