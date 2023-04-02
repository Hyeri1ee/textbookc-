#include "Cutstom.h"
#include <string>
#include <iostream>

int main() {
	string strg("abcdefgh");
	cout << "String before calling pushFront : " << strg << endl;
	pushFront(strg, 'A');
	cout << "String after calling pushFront : " << strg << endl;
	cout << endl;

	cout << "String before calling pushBack : " << strg << endl;
	pushBack(strg, 'Z');
	cout << "String after calling pushBack : " << strg << endl;
	cout << endl;

	cout << "String before calling popFront: " << strg << endl;
	char c1 = popFront(strg);
	cout << "String after calling popFront: " << strg << endl;
	cout << "The popped charaacter : "<<c1 <<endl;

	cout << "String before calling popBack: " << strg << endl;
	char c2 = popBack(strg);
	cout << "String after calling popBack: " << strg << endl;
	cout << "The popped charaacter : " <<c2<< endl;



	return 0;
}