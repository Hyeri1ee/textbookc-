#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.141592653589;
	int n;
	double s, peri, area;

	//Inputting number of sides
	do {
		cout << "Enter the number of sides (4 or more) : ";
		cin >> n;
	} while (n < 4);
	//Inputting the length of each side
	do {
		cout << "Enter the length of each side : ";
		cin >> s;
	} while (s < 0.0);

	//Calculating perimeter and area
	peri = n * s;
	area = (n * pow(s, 2)) / (n * tan(PI / n));
	cout << "Perimeter : " << peri << endl;
	cout << "Area : " << area;
	return 0;
}