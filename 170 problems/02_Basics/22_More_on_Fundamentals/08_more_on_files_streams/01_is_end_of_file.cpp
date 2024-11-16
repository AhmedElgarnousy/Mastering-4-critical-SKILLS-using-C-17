#include <iostream>
#include <fstream>

using namespace std;

/*
// File Modes
- ios::app --> Append to end-of-file
- ios::ate --> go to end-of-file on opening
- ios::binary --> Binary file
- ios::in --> open file for reading only
- ios::nocreate --> open fails if file doesn't exist
- ios::noreplace --> open fails if file already exist
- ios::out --> open file for writing only
- ios::trunk --> delete the contents of the file if it exist
*/

int main()
{
    ifstream is("example.txt"); // open file

    char c;
    while (is.get(c)) // loop getting single characters
        cout << c;

    if (is.eof()) // check for EOF
        cout << "[EoF reached]\n";
    else
        cout << "[error reading]\n";

    is.close(); // close file

    return 0;
}