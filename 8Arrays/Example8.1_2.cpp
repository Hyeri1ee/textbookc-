#include <iostream>
#include <fstream>
using namespace std;
int main() {
	//declarations
	const int CAPACITY = 50;
	int numbers[CAPACITY];
	int size = 0;
	ifstream inputFile;
	ofstream outputFile;
	//opening the input file
	inputFile.open("array.txt");
	if (!inputFile)
	{
		cout << "Error. Input file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}
	//read inputFile
	while (inputFile >> numbers[size] && size <= 50) //size <= 50 �� ������ ���� ���� : Ȥ�ó� inputFile�� size�� 50�� �Ѿ�� �迭�� ���� ���� ������ �Ÿ��� �뵵.
	{
		size++;
	}
	inputFile.close();
	outputFile.open("arrayoutput.txt");
	if (!outputFile)
	{
		cout << "Error. Output file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}
	//outputFile���� inputFile�� ������ �ε��� �Ųٷ� ����.
	for (int i = size - 1; i >= 0; i--)
	{
		outputFile << numbers[i] << " ";
	}
	outputFile.close();
	return 0;
}