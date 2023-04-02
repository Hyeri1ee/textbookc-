#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[] = "Hello friends.";
	char* cPtr = strchr(str, 'e');

	*cPtr = 'E';
	cout << "str after first change  : " << str << endl;
	
	char str2[] = "Hello friends of mine.";
	char* sPtr = strstr(str2, "friends");
	cout << "The substring strats at index " << sPtr - str2;
	return 0;
}