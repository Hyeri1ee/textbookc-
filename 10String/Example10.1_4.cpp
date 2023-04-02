#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char lines[3][80];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a line of characters :: ";
		cin.getline(lines[i], 80);
	}
	cout << endl;
	cout << "Output ::" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << lines[i] << endl;
	}
	return 0;
}