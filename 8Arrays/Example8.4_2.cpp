#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	const int CAPACITY = 10;
	int frequencies[CAPACITY] = { 0 }; 
	ifstream integerFile;
	ofstream outegerFile;

	integerFile.open("integerFile.txt");
	if (!integerFile)
	{
		cout << "Error. Integer file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}

	int data;
	int size = 0;
	while (integerFile >> data)
	{
		if (data >= 0 && data <= 9) //범위를 만족하는 수만 읽기
		{
			size++;
			frequencies[data]++;
		}
	}
	integerFile.close();
	string s = "\n";
	cout << "There are" << size << "valid data items." << endl;
	for (int i = 0; i < 10; i++)
	{
		s.append(to_string(i));
		s.append("   ");


		for (int f = 1; f <= frequencies[i]; f++)
		{
			s.append("*");

		}
		s.append(" ");
		string t = to_string(frequencies[i]);
		s.append(t);
		s.append("\n");
	}
	outegerFile.open("outputIntegerFile.txt");
	if (!outegerFile)
	{
		cout << "Error. Output file cannot be opened." << endl;
		cout << "The program is terminated.";
		return 0;
	}
	outegerFile << s;
	outegerFile.close();
	return 0;

}
