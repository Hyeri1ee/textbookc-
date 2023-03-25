#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Declaration of variables
	int a, b, c;
	double term;

	//Inputting the value of three coefficients
	cout << "Enter the value of coefficient a : ";
	cin >> a;
	cout << "Enter the value of coeffiecient b : ";
	cin >> b;
	cout << "Enter the value of coeffiecient c : ";
	cin >> c;
	
	//term
	term = pow(b, 2) - 4 * a * c;

	//result
	if (term < 0) {
		cout << "There is no root!" << endl;
	}
	else if (term == 0)
	{
		cout << "The two roots are equal." << endl;
		cout << "x1=x2=" << -b / (2 * a) << endl;
	}
	else
	{
		cout << "Ther are two distinct roots:" << endl;
		cout << "x1=" << (-b + sqrt(term)) / (2 * a) << endl;
		cout << "x2=" << (-b - sqrt(term)) / (2 * a) << endl;
	}
	return 0;
}