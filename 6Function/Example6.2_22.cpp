#include <iostream>
using namespace std;
int num = 5;
int main() {
	int num = 35;
	cout << "Value of Global num : " << ::num << endl;
	cout << "Value of local num : " << num << endl;
	return 0;
		
}