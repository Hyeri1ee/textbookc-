#include "Circle.h"
int main()
{
	Circle circle1(5.2);
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

	Circle circle2(circle1);
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

	Circle circle3;
	cout << "Radius: " << circle3.getRadius() << endl;
	cout << "Area: " << circle3.getArea() << endl;
	cout << "Perimeter: " << circle3.getPerimeter() << endl << endl;

	return 0;
}