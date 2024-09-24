#include <iostream>     // std::cout, std::skipws, std::noskipws
#include <sstream>      // std::istringstream
using namespace std;

void go1() {
	int num;
	cin >> num;

	if (num == 1)
		cout << "1\n";
	else if (num == 100 || num == 1000)
		cout << "100 or 1000\n";
	else if (num == 200) {
		cout << "200\n";
		cout << "hmm\n";
	} else
		cout << "hmm\n";
}

void go2() {
	int num;
	cin >> num;

	switch (num) {
	case 1:
		cout << "1\n";
		break;
	case 100:
	case 1000:
		cout << "100 or 1000\n";
		break;
	case 200:
		cout << "200\n";
	default:
		cout << "hmm\n";
	}
}

int main() {
	go1();

	return 0;
}
