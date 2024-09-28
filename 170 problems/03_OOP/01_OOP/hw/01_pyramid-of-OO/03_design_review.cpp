
#include<iostream>

using namespace std;

/*
* THink in the current data members
- All of them are relevant for a person
- All of them are relevant for a bank application
- convenient data members
* think in 2+ missing critical data members
*/


struct BankCustomer{
    string name;
    string address;
    string mobile;
    string birth_of_date;
    int rectangle_width; 
    string favourite_movie;
    string favourite_color;
    string favourite_actor;
    string favourite_car_model;
    string favourite_food;
    int s;

    // Potential several methods related to birth date
};


/* 
// Answer 
- Single Responsibility Principle
*/

struct Person{
    string name;
    int age;
    char gender; // M,F
    string address;
    string mobile;
    string birth_of_date;
};

struct Favourite {
    string favourite_movie;
    string favourite_color;
    string favourite_actor;
    string favourite_car_model;
    string favourite_food;
};

struct BankCustomer{
    Person person;
    Favourite fav;
    int account;
    double money;

};

// unrelated
// int rectangle_width; 
//  int s;



int main()
{

    return 0;
}