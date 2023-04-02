#include <string>
#include <iostream>
using namespace std;

int main() {
	string first, last;
	char init;

	cout << "Enter first name:";
	cin >> first;
	cout << "Enter last name:";
	cin>> last;
	cout << "Enter initial:";
	cin >> init;

	cout << endl;
	cout << "Full name in first format : ";
	cout << first + " " + init + "." + " " + last << endl << endl;

	cout << "Full name in second format : ";
	cout << last + "." + first + " " + init + ".";
	return 0;
}