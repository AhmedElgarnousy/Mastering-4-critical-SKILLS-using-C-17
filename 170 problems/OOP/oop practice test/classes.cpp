#include<iostream>

using namespace std;

class company{
  public:
    int id;
    string name;
    float salary;

    // constructor is an object birth certficate

    company(){
      id = 100;
      name = "smart village";
      salary = 5000;

      cout<<"hello um a constructor";
    }

    // void save(int id, string str, float sal) {
    //   id = id;
    //   name = str ;
    //   salary = sal;
    
    // }

    void display(){
      cout<<id <<" "<< name<< " " << salary<<"\n";
    }

};


int main() {

    
  company valeo;
  // // valeo.save(100, "valeo", 1000);
  // valeo.id = 1000;
  // valeo.name = "valeo na";
  // valeo.salary = 500;

  // valeo.display();
  
  return 0;
}

