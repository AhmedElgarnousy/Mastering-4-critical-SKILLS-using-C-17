#include <iostream>

using namespace std;

int main()
{

    /*****************************************************************************
    *                   Easy: Problem #2: Students grades                        *
    /****************************************************************************/

    string name1;
    int id1, grade1;

    string name2;
    int id2, grade2;

    cout << "What is student 1 name: ";
    cin >> name1;
    cout << "His id: " << "\n";
    cin >> id1;
    cout << "His math exam grade: " << "\n";
    cin >> grade1;

    cout << "What is student 2 name: ";
    cin >> name2;
    cout << "His id: " << "\n";
    cin >> id2;
    cout << "His math exam grade: " << "\n";
    cin >> grade2;

    cout << "Students grades in math\n"
         << name2 << "(with id " << id2 << ")"
         << " got grade: "
         << grade2 << "\n";
    cout << "Average grade is: " << (grade1 + grade2) / 2;

    return 0;
}