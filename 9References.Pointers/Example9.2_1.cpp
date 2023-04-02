#include <iostream>
using namespace std;

int main() {
	int score = 92;
	int* pScore = &score;

	cout << "Direct retrieve of score : " << score << endl;
	cout << "Indirect retireve of score : " << *pScore << endl;
	return 0;
}