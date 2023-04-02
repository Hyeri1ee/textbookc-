#include <iostream>
using namespace std;

void reverse(int*, int);
int main() {
	int arr[5] = { 10,11,12,13,14 };
	reverse(arr, 5);
	cout << "Reversed Array  : " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(arr + i) << " ";
	}
	return 0;
}
void reverse(int* pArr, int size)
{
	int i = 0;
	int j = size - 1;
	while (i < size / 2)
	{
		int temp = *(pArr + i);
		*(pArr + i) = *(pArr + j);
		*(pArr + j) = temp;
		i++;
		j--;
	}
}