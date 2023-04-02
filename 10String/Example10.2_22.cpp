#include <iostream>
#include <string>
using namespace std;
void reverse(string& strg);
bool isPalindrome(string& strg);

int main() {

	string strg;

	cout << "Enter a string : ";
	getline(cin, strg);

	if (isPalindrome(strg))
	{
		cout << strg << "is a plaindrome.";

	}
	else {
		cout << strg << "is not a palindrome.";
	}
	return 0;
}
bool isPalindrome(string& strg)
{
	string temp(strg);
	reverse(temp);
	return (temp == strg);
}
void reverse(string& strg)
{
	string temp(strg);
	int size = strg.size();
	for (int i = 0; i < size; i++)
	{
		strg[i] = temp[size - 1 - i];
	}
}
