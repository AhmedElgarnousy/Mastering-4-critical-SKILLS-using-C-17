#include<iostream>
// #include<exception>
#include<vector>
using namespace std;

struct BankAccount {
  int money = 1000;
  bool PayBill(int bill_value) {
    if(bill_value < 0)
      throw invalid_argument("Bill Value can't be negative");
    if(money >= bill_value) {
      money -= bill_value;
      return true;
    } else  
      return false;
  }
};

/*
reference at(size_type __n)
{
  _M_range_check(__n);
  return(*this)[__n];
}
// safety check used only from at().
void _M_range_check(size_type __n) const
{
  if(__n >= this->size())
    __throw_out_of_range_fmt(__N("vector::_M_range_check: __n"
                        "(which is %zu) >= this->size() "
                        "(which is %zu)"),
                        __n, this->size());
}
*/

int main() {
    /*
    BankAccount acct;
    cout<<acct.PayBill(100)<<"\n";
    cout<<acct.PayBill(5000000)<<"\n";
    cout<<acct.PayBill(-10)<<"\n";
    cout<<acct.PayBill(200)<<"\n"; // WON'T be processed
    */

    /*
    //  Vector: [] vs at() 
  vector<int> v(10);

  // wrong, but it may not crash
  int t = v[25];
  cout<<t<<"\n";

  // at validate and throws out_of_range exception
  t= v.at(25);
  cout<<"Bye";       // WON'T be displayed
    */

   /*
   // Throw the caughted exception
    BankAccount acct;
    try {
    cout<<acct.PayBill(100)<<"\n";
    cout<<acct.PayBill(5000000)<<"\n";
    cout<<acct.PayBill(-10)<<"\n";
    cout<<acct.PayBill(200)<<"\n"; // WON'T be processed
    } catch(invalid_argument &e) {
      cout<< "caught an exception: " << e.what() << "\n";
      throw e;      // I don't want to handle 
    }  
    cout << "Bye";
   */

  return 0;
}