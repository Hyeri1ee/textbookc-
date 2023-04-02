#include <iostream>
using namespace std;

int main() {
	int size;
	int* pArray;

	do {
		cout << "Enter the array size (larger than zero) :";
		cin >> size;
	} while (size <= 0);

	pArray = new int[size]; //배열 동적할당하기

	for (int i = 0; i < size; i++)
	{
		cout << "Enter the value for element " << i << " : ";
		cin >> *(pArray + i);
	}

	cout << "The elements in the array are : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(pArray + i) << " ";
	}
	delete[]pArray;
	return 0;
}