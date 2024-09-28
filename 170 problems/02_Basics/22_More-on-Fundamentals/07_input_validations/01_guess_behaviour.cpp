#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // we don't expect more than 256 char and end when '\n'
    cin.ignore(256, '\n');
    string full_name;
    cout << "Enter full: ";
    // getline(cin, full_name);
    getline(cin, full_name);

    cout << "your age: " << age << " your name: " << full_name << "\n";

    /*sol: how to discard \n (Enter)*/
    /*
    -- sol1-
        - use 2 getline,
        - one reads \n
        - another reads the name
    -- sol2:
        - use cin.ignore
    */

    return 0;
}