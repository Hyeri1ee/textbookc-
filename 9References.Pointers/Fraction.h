
#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>
using namespace std;
class Fraction {
private:
	int numer;
	int denom;
public:
	//constructors
	Fraction(int num, int den);
	Fraction();
	Fraction(const Fraction& fract);
	~Fraction();
	//funciton : accessors
	int getNumer() const;
	int getDenom() const;
	void print() const;
	//function : mutators
	void setNumer(int num);
	void setDenom(int den);

private:
	void normalize();
	int gcd(int n, int m);
};
#endif
