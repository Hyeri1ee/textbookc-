#include <iostream>
#include <cctype>
using namespace std;
int main() {
	//Declaration
	char ch;
	int count = 0;

	//Inputting character and processing
	while (cin >> noskipws >> ch) { //skipws : �Է� ��Ʈ������ ���� ���ڸ� ���� �ʰ� �ǳʶ�
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