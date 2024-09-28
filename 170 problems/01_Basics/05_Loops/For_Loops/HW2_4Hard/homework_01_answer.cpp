#include <iostream>
using namespace std;




int main()
{
    /****************************************************
    *           Hard: Problem #1: Printing X            *
    /***************************************************/
    int spaces, stars;
    int oddNum;
    cout<<"Enter odd Num, less than 500: ";
    cin >> oddNum;

    int lines = oddNum;

    int curline = 0;
    spaces = lines - 2;
    
    while (oddNum--)
    {
        
        if (curline == lines / 2)
        {// print one star in the middle
           for (int i = 0; i < curline; i++)
               cout << "-";

           cout << "*";
           //cout << "*"<<"\n";
           //continue;
        }
        else{

        if (curline > (lines / 2) )  
        {
            curline = (lines -1 ) - curline;
            // curline = 0;
            // cout<<"curLine after lines/2: "<<curline<<"\n";  
          
            spaces = lines -2;
        }

        for (int i = 0; i < curline; i++)
            cout << "-";

        cout << "*";  // first star

        for (int i = 0; i < spaces; i++)  // spaces  between stars
            cout << "-";

        cout << "*";  // second star

        // can be removed
        for (int i = 0; i < curline; i++)
            cout << "-";
        }

        cout << "\n";
        curline++;
        spaces -= 2;
     
    }

    return 0;
}