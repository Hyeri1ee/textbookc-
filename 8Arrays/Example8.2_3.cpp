#include <iostream>
using namespace std;

void reverse(const int array1[], int array2[], int size)
{	//array1의 배열을 읽어서 array2에 복사하는 것
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		array2[j] = array1[i];
	}
	return;
}
void print(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";

	}
	cout << endl;
	return;
}

int main() {
	int array1[5] = { 150,170,190,110,130 };
	int array2[7];

	reverse(array1, array2, 5);
	cout << "array1 : " << endl;
	print(array1, 5);
	cout << "array2 : " << endl;
	print(array2, 5);
	return 0;
}