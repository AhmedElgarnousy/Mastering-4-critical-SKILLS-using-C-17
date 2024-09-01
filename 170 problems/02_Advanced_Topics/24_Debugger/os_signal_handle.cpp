#include<iostream>
#include<csignal>

using namespace std;

void SIGFPE_handler(int a ){
    // a value is SIGFPE =8. use endl/flush
    cout<<"\nwe received SIGFPE signal. \n"
    <<"\t May be Division by zerooooo"<<endl;
}

int main()
{
    signal(SIGFPE, SIGFPE_handler);

    cout<<"Let's divide float by zero\n";
    cout<<"5.0 / 0 = "<< 5.0 / 0 << "\n";
    cout<<"Divide float by zero *works*\n";
    
    cout<<"Let's divide int by zero\n";
    cout<<"5 / 0 = "<< 5 / 0 << "\n";
    cout<<"Divide integer by zero *works*\n";
    return 0;
} 