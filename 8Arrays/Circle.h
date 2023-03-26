#ifndef CIRCLE_H //CIRCLE_H가 정의되지 않았으면, 실행 (따라서, 맨 처음 실행된 후, 그 후로는 실행 안하므로, 헤다파일의 중복 선언 방지)
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