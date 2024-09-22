#include <iostream>

using namespace std;

struct BAnkAccount {
    int money = 1000;
    // withdraw
    bool payBill(int amount)
    {
        if(amount < 0)
        {
            throw invalid_argument("neg value!!!");
            //return 0;
        }
        if(money >= amount)
        {
            money -= amount;
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    BAnkAccount acct;
   try {
        cout<<acct.payBill(100)<<"\n";
        cout<<acct.payBill(500000)<<"\n";
        cout<<acct.payBill(-10)<<"\n";
        cout<<acct.payBill(200)<<"\n";
    }
   
    catch(invalid_argument &e)
    {
        cout<<"Caugth an exception: "<<e.what() <<"\n";
        //throw e; // I don't want to handle
    }


    cout<<"BYeeee\n";

    return 0;
}