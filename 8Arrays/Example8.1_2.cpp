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
	while (inputFile >> numbers[size] && size <= 50) //size <= 50 이 조건을 넣은 이유 : 혹시나 inputFile에 size가 50을 넘어가는 배열이 있을 수도 있으니 거르는 용도.
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
	//outputFile에는 inputFile의 내용을 인덱스 거꾸로 저장.
	for (int i = size - 1; i >= 0; i--)
	{
		outputFile << numbers[i] << " ";
	}
	outputFile.close();
	return 0;
}