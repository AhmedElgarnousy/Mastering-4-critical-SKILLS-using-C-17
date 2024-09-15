#include <iostream>
#include <sstream>
using namespace std;

int toint(string str)
{
	istringstream iss(str);
	int ret;
	iss >> ret;
	return ret;
}

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		cout << "ERROR: Please pass string and integer\n";
		return 0;
	}

	string path = argv[1];
	int limit = toint(argv[2]);

	cout << path << "\n";
	cout << limit << "\n";

	return 0;
}
