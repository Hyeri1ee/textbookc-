#include <iostream>
#include <string>
using namespace std;

int main() {
	string text, word;
	string delimiter("\n");
	string::size_type wStart, wEnd;
	string::size_type npos;

	cout << "Enter a line of text : " << endl;
	getline(cin, text);

	cout << "Words in the text : " << endl;
	wStart = text.find_first_not_of(delimiter, 0);
	while (wStart < npos)
	{
		wEnd = text.find_first_of(delimiter, wStart);
		cout << text.substr(wStart, wEnd - wStart) << endl;
		wStart = text.find_first_not_of(delimiter, wEnd);
	}
	return 0;
}