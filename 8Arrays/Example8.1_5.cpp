#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile;

	const int CAPACITY = 50;
	int numbers[CAPACITY];
	int size = 0;

	int sum = 0;
	double average;
	int largest = -1000000;
	int smallest = 1000000;

	inputFile.open("array.txt");
	if (!inputFile)
	{
		cout << "Error. Input file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}
	while (inputFile >> numbers[size])
	{
		size++;
	}
	inputFile.close();
	for (int i = 0; i < size; i++)
	{
		sum += numbers[i];
		if (numbers[i] < smallest)
		{
			smallest = numbers[i];
		}
		if (numbers[i] > largest)
		{
			largest = numbers[i];
		}
	}
	average = static_cast <double> (sum) / size;

	cout << "Ther are  " << "numbers in the list" << endl;
	cout << "The sum of them is : " << sum << endl;
	cout << "The average of them is : " << average << endl;
	cout << "The smallest number is : " << smallest << endl;
	cout << "The largest number is  : " << largest << endl;
	return 0;

}