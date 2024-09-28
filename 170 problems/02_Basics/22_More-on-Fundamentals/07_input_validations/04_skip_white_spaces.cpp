#include <iostream> // std::cout, std::skipws, std::noskipws
#include <sstream>  // std::istringstream

using namespace std;

int main()
{
    // Tab spaces, carriage returns and blank spaces
    // are all considered whitespaces (see isspace)
    char a, b, c;

    std::istringstream iss("  123");
    iss >> std::skipws >> a >> b >> c;
    std::cout << a << b << c << '\n'; // 123

    iss.seekg(0);
    iss >> std::noskipws >> a >> b >> c;
    std::cout << a << b << c << '\n'; // 1
    return 0;
}