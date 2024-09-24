#include <iostream>
#include <iomanip> // for  setw
using namespace std;

// manipulator aka:
// used to change formatting parameters on streams
// for floating point: fixed, scientific, showpoint
// also
// uppercase, boolalpha
// showpos, noshowpos
// setw
// showbase << oct or hex

int main()
{
    // showpos
    cout << std::showpos;
    cout << 100 << "\n";  // +100
    cout << -100 << "\n"; // -100

    // noshowpos
    cout << std::noshowpos;
    cout << +100 << "\n"; // 100
    cout << -100 << "\n"; // -100

    // setw: creates field of N slots for the next one output
    cout << "[" << 1234 << "]\n";
    cout << "[" << setw(5) << 1234 << "]\n";
    cout << "[" << setw(6) << 1234 << "]\n";
    cout << "[" << setw(7) << 1234 << "]\n";

    cout << setiosflags(ios::left);
    cout << "[" << setw(7) << 1234 << "]\n";

    // Bases of numbers
    cout << 15 << "\n";
    cout << showbase << oct << 15 << "\n";
    cout << showbase << hex << 15 << "\n";
    cout << showbase << uppercase << hex << 15 << "\n";

    return 0;
}