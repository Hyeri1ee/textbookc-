#include <iostream>
#include <cctype>
using namespace std;
int main() {
	//Declaration
	char ch;
	int count = 0;

	//Inputting character and processing
	while (cin >> noskipws >> ch) { //skipws : 입력 스트림에서 공백 문자를 읽지 않고 건너뜀
		if (isalpha(ch))
		{
			count++;
		}
		ch = toupper(ch);
		cout << ch;
	}
	cout << "The count of alphabetic characters is : " << count;
	return 0;
}