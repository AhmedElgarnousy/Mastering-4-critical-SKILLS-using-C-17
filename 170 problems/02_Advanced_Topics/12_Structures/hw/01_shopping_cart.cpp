/*****************************************************************
                  *  Homework Structures    * 
                *    Pro1: shopping Cart      * 
*****************************************************************/
#include <iostream>
#include <vector>
using namespace std;


/*******************structures*****************/
struct item{
  string name;
  int price;
};

struct shoppingCart{
  vector<item>Items;
  void add_item(item a){
    Items.push_back(a);
  }

  bool remove_item(item b){
   for(int i = 0; i  < Items.size() ; i++){
      if(Items[i].name == b.name){
        Items.erase(Items.begin() + 1);
        return true;
      }
   }
        return false;
  }

  void print_items(){
    for(int i = 0; i < (int)Items.size(); i ++){
      cout<<Items[i].name<<" "<<Items[i].price<<"\n";
    }
      cout<<"****************************\n\n";
  }
};


int main()
{
  // item motor = {"DcMotor", 350};
  // item controller = {"tivaC", 1400};
  // item sensor = {"LDR", 40};
  item motor, controller, sensor;

  shoppingCart MyCart;
  MyCart.add_item({"DcMotor", 350});
  MyCart.add_item({"tivaC", 1400});
  MyCart.add_item({"LDR", 40});
  MyCart.add_item({"BreadBoard", 50});

  MyCart.print_items();

  MyCart.remove_item({"LDR", 40});

  MyCart.print_items();

  return 0;
}