#include <iostream>

using namespace std;


int main()
{

  int num1, num2;
  char sign;
  cin>>num1>> num2>>sign;

  if(sign ==  '+')
  {
    cout<<num1 <<sign << num2  <<"="<<num1+num2;
  }
  else if ( sign ==  '-')
  {
    cout<<num1 <<sign << num2  <<"="<<num1-num2;
  }
  else if ( sign ==  '*' )
  {
    cout<<num1 <<sign << num2  <<"="<<num1*num2;
  }
  else if ( sign ==  '/')
  {                                           
    cout<<num1 <<sign << num2  <<"="<<num1/num2;
  }
  else
  {
    cout<<"invalid Input!";
  }

  return 0;
}