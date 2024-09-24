#include <iostream>
#include <climits> // for const limits like INT_MAX

using namespace std;


/*
    for numbers, we can append some 
    letters to indicate the type 
*/

/*
// src: https://stackoverflow.com/questions/25114597/how-to-print-int128-in-g
// seems help printing  __int128_t
std::ostream& operator<<(std::ostream& dest, __int128_t value) {
	std::ostream::sentry s(dest);
	if (s) {
		__uint128_t tmp = value < 0 ? -value : value;
		char buffer[128];
		char* d = std::end(buffer);
		do {
			--d;
			*d = "0123456789"[tmp % 10];
			tmp /= 10;
		} while (tmp != 0);
		if (value < 0) {
			--d;
			*d = '-';
		}
		int len = std::end(buffer) - d;
		if (dest.rdbuf()->sputn(d, len) != len) {
			dest.setstate(std::ios_base::badbit);
		}
	}
	return dest;
}
*/


int main()
{
    cout<<2<<"\n"; // int 
    cout<<2u<<"\n"; // u = unsigned
    cout<<2l<<"\n"; // l = long
    cout<<2ll<<"\n"; // ll = long long


    cout << INT_MAX << "\n";		// 2147483647
	cout << LONG_MAX << "\n";		// 9223372036854775807
	cout << LLONG_MAX << "\n";		// 9223372036854775807
	cout << ULLONG_MAX << "\n";		// 18446744073709551615

    
	// c++ finds the smallest type of int, lomg, long long
    // that fit with this num
    cout << 2147483647 << "\n";	// ok int
    cout << 9223372036854775807 << "\n";	// ok long long
	// cout<<18446744073709551615<<"\n";	// CE: because > long long

    // for compiler to store it in ull instead of int
    cout << 2147483647ull << "\n";	// unsigned long long

    // Not CE: for compiler to store it in ull instead of ll
    cout << 18446744073709551615ull << "\n";	// unsigned long long

    // Not standard yet. 16 bytes(128 bit) just for gcc 
    //  __int128_t x = 18446744073709551615ull;
    // ++x;
	// cout<<x<<"\n";	// CE no print for it. You have to write by yourself


    return 0;
}