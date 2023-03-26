#include <iostream>
using namespace std;
int main() {
	int score = 92;
	int& rScore = score;
	int num = 80;
	rScore = num; //scoreµµ ∞∞¿Ã πŸ≤Ò

	cout << "score : " << score << endl;
	cout << "rScore : " << rScore << endl;
	return 0;
}