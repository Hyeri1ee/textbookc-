#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Defining constant PI and an angle of 45 degrees
	const double PI = 3.14159265358979;
	double degree = PI / 4;

	//Finding the sin, cos, and tan of an angle of 45 degrees
	cout << "sin(45): " << sin(degree) << endl;
	cout << "cos(45): " << cos(degree) << endl;
	cout << "tan(45): " << tan(degree) << endl;
	return 0;
}