#include <iostream>
#include <climits>	// INT_MAX
using namespace std;

int main() {

	short short_var1 = -10;
	signed short short_var2 = -10;	// EXACTLY same

	cout << short_var2<<": "<<sizeof(short_var1) << " bytes\n";	// -10: 2 bytes

	cout<<SHRT_MIN<<" "<<SHRT_MAX<<"\n";	// -32768 32767
	short_var1 = SHRT_MAX + 1;
	cout<<short_var1<<"\n";		// overflow => -32768

	unsigned short short_var3 = USHRT_MAX;
	cout<<0<<" "<<short_var3<<"\n";	// 0 65535
	++short_var3;
	cout<<short_var3<<"\n";	// overflow ==> 0
	short_var3 = -1;
	cout<<short_var3<<"\n";	// underflow ==> 65535
	short_var3 = -2;
	cout<<short_var3<<"\n";	// underflow ==> 65534		wrapping around


	return 0;
}
