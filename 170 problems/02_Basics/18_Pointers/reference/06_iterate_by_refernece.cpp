#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> vec {1, 2, 3, 4};

	for(auto &val : vec) {
		cout<<val<<" ";
		val = 1;
	}
	cout<<"\n";	// 1 2 3 4

	for(auto &val : vec)
		cout<<val<<" ";
	cout<<"\n";	// 1 2 3 4

	return 0;
}
