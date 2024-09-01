/*****************************************************************
                  *  Homework Structures    * 
               *  Pro2:  Honda's Car System   *
*****************************************************************/
#include <iostream>
#include <vector>
using namespace std;


struct ServiceHistory{
  string MaintaineceDes;
  string data;
  double cost;
};

struct Car{
  string modelName;
  vector<ServiceHistory> Service;

};

struct Inventory{
  vector<Car> New_Cars;
  vector<Car> Userd_Cars;

};

struct CarsLocation{
  Inventory inventory;
  string name;
  string address;
};

struct HondaCarSystem {
  vector<CarsLocation> locations;

  void add_location(CarsLocation location){
    locations.push_back(location);
  }
};


int main()
{
  
  return 0;
}