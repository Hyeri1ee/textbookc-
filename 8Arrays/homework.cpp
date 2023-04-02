#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, string** argv)
{
	const int CAPACITY = 100;
	string num;
	string middle[CAPACITY];
	ifstream inputFile;
	ofstream outputFile;


	inputFile.open("homeworkinputFile.txt");
	if (!inputFile)
	{
		cout << "Error. Integer file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}
	//거꾸로 생성할 파일
	outputFile.open("homeworkoutputFile.txt");
	if (!outputFile)
	{
		cout << "Error. Output file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}
	int size = 0;
	while (inputFile >> num)
	{
		middle[size + 1] = num;
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		string *p = &middle[i + 1];
		argv[i+1] = p;
	}
	//outpuFile에 넣는부분
	for (int i = size ; i > 0; i--)
	{
		outputFile << *argv[i];
	}
	outputFile.close();
	return 0;
}
