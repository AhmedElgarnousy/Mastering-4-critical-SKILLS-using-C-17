#include <iostream>
#include <stdlib.h> // atoi -> convert a "num" to int

using namespace std;

// argc is # of arguments
// argv is array of string of arguments

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        cout << "argument<" << i << "> is " << argv[i] << "\n";

    // wrong type
    // const std::string str = "2024";
    // string str = "2024";
    const char *str = "2024";
    int num1 = atoi(str);
    cout << num1 + 1 << "\n";
    return 0;
}