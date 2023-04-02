#include <iostream>
using namespace std;
int main() {
	int score = 92;
	const int* pScore = &score;
	score = 20;

	cout << "score : " << score << endl;
	cout << "*pScore : " << *pScore << endl;
	
	return 0;
}