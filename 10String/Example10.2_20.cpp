#include <iostream>
#include <string>
using namespace std;
int main() {
	string strg1("Hello my friends ");
	string strg2("Hello friends ");

	cout << strg1 << "compared with" << strg2 << " : ";
	cout << strg1.compare(strg2) << endl;

	cout << "Hello compared with Hello : ";
	cout << strg1.compare(0, 5, strg2, 0, 5) << endl;

	cout << "Hello compared with Hello : ";
	cout << strg1.compare(0, 5, strg2) << endl;

	cout << "Hel compared with Hell : ";
	cout << strg2.compare(0, 3, "Hello", 4);
	return 0;
}