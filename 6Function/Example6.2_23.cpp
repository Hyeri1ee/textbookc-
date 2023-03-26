#include <iostream>
using namespace std;
void fun();
int main() {
	fun();
	fun();
	fun();
	return 0;
}
void fun() {
	int num = 3;
	/*auto count = 0;
	num++;
	count++;
	cout << "num : " << num << " and " << "count : " << count << endl;*/
	static int count = 0;
	count++;
	cout << "count : " << count << endl;
}