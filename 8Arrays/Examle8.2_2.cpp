#include <iostream>
using namespace std;
void multiplyByTwo(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		numbers[i] *= 2;
	}
	return;
}
void print(const int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << " ";
	}
	return;
}
int main() {
	int numbers[15] = { 5,7,9,11,13 };
	print(numbers, 5);
	cout << endl;
	multiplyByTwo(numbers, 5);
	print(numbers, 5);
	return 0;
}