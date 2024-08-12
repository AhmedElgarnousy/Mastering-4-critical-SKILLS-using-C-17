#include <iostream>

using namespace std;

/*************************************************
 * 	         	 Homework 3: Calculator          *
/************************************************/

// global variables
double num1, num2 ;
int NumOfOPerations =0;

// function implemenattions
int menu( )
{
    int choice ;
    cout
    <<"1- Add 2 numbers\n"
    <<"2- subtract 2 numbers\n"
    <<"3- multiply 2 numbers\n"
    <<"4- divide 2 numbers\n"
    <<"5- End the program\n";

    cout<<"enter a num from (1 - 5): ";
    cin>>choice;
    if(1 > choice  && choice > 5 )
    {
        cout<<"Error: Invalid Choice:\nAgain \n";
        menu();
    }    
    if(choice != 5)
        NumOfOPerations++;
    return choice;
}

void read()
{       
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
}
double add(double num1, double num2 )
{
     return num1 + num2 ;
}
double subtract(double num1, double num2 )
{
     return num1 - num2 ;
}
double multiply(double num1, double num2 )
{
     return num1 * num2 ;
}
double divide(double num1, double num2 )
{
    if(!num2){
        cout<<"Error: can't divide by zero\n";
        return 0;
    }
    return num1 / num2 ;
}
void exit()
{
    cout<<"End the program\n";
    cout<<"# of operations is "<<NumOfOPerations<<"\n";
}

void Calculator()
{
     while(1)
    {
        int choice = menu();
        if(choice == 5)
        {
            exit();
            break;
        }

        read();
        if(choice == 1)
            cout<<"result: "<<add(num1, num2)<<"\n";
        if(choice == 2)
            cout<<"result: "<<subtract(num1, num2)<<"\n";
        if(choice == 3)
            cout<<"result: "<<multiply(num1, num2)<<"\n";
        if(choice == 4)
            cout<<"result: "<<divide(num1, num2)<<"\n";
    }
}
int main()
{
     Calculator();  
    return 0;
}