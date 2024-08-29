// C++ program to take long string input with spaces. 

#include <iostream> 
// #include <string> 
using namespace std; 

int main() 
{ 

	cout << "Enter long string with spaces: "; 
	
	string usr_str; 
	// Use getline() to take input with spaces 
	getline(cin, usr_str); 
	// Display the input 
	cout << "You entered: " << usr_str << endl; 
	return 0; 
}
