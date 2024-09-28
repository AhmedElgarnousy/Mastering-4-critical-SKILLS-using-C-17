#include <iostream>

using namespace std;

struct BankAcount {
  int money = 1000;
  bool PayBill (int amount)
  {
    if(amount < 0) 
      throw invalid_argument("neg val!!!");
    if (money >= amount)
    {
      money -= amount;
      return 1;
    }
    else{
      return false;
    }
  }
};

int main()
{
  BankAcount bank_asr;
  bank_asr.PayBill(100);
  bank_asr.PayBill(-10); // throw exception
  bank_asr.PayBill(40);



  return 0;
}