#include <iostream>
using namespace std;
//매개변수 디폴트 값
double calcEarnings(double rate, double hours = 40);
int main() {
	cout << "Employee 1 pay:" << calcEarnings(22.0) << endl;
	cout << "Employee 2 pay:" << calcEarnings(12.50, 18) << endl;
	return 0;
}
double calcEarnings(double rate, double hours)
{
	double pay;
	pay = hours * rate;
	return pay;
}