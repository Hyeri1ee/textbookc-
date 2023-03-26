#include <iostream>
using namespace std;
//swap function with passby-reference
void swap(int& first, int& second);
void print(int x, int y);
int main(void)
{
	int x = 13;
	int y = 111;

	cout << "Values of x and y before swapping." << endl;
	print(x, y);
	cout << "Value of x and y after swapping." << endl;
	swap(x, y);
	print(x, y);
	return 0;
}
void swap(int& first, int& second)
{
	int temp;
	temp = second;
	second = first;
	first = temp;
}
void print(int a, int b)
{
	cout << "x : " << a << endl;
	cout << "y : " << b << endl;
}