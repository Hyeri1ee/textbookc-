#ifndef CIRCLE_H //CIRCLE_H�� ���ǵ��� �ʾ�����, ���� (����, �� ó�� ����� ��, �� �ķδ� ���� ���ϹǷ�, ��������� �ߺ� ���� ����)
#define CIRCLE_H
#include <iostream>
#include <cassert>
#include "Circle.h"
using namespace std;

class Circle {
private:
	double radius;
public:
	Circle(double radius);
	Circle();
	Circle(const Circle& circle);
	~Circle();
	void setRadius(double radius);
	double getRadius()const;
	double getArea()const;
	double getPerimeter()const;
};
#endif