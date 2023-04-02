#include<cmath>
#include <cassert>
#include "Fraction.h"

Fraction::Fraction(int num, int den = 1)
	:numer(num), denom(den)
{
	normalize();
}
Fraction::Fraction()
	:numer(0), denom(1)
{}
Fraction::Fraction(const Fraction& fract)
	:numer(fract.numer), denom(fract.denom)
{}
Fraction::~Fraction() {}
int Fraction::getNumer()const
{
	return numer;
}
int Fraction::getDenom()const
{
	return denom;
}
void Fraction::print() const
{
	cout << numer << "/" << denom << endl;
}
void Fraction::setNumer(int num)
{
	numer = num;
	normalize();
}
void Fraction::setDenom(int den)
{
	denom = den;
	normalize();
}
void Fraction::normalize()
{	//예외라고 생각할 수 있는 3가지에 대해.
	if (denom == 0)
	{
		cout << "Invalid denomination. Need to quit." << endl;
		assert(false);
	}

	if (denom < 0)
	{
		denom = -denom;
		numer = -numer;
	}
	int divisor = gcd(abs(numer), abs(denom));
	numer = numer / divisor;
	denom = denom / divisor;
}
int Fraction::gcd(int n, int m)
{
	int gcd = 1;
	for (int k = 1; k <= n && k <= m; k++)
	{
		if (n % k == 0 && m % k == 0)
		{
			gcd = k; //두 수 n,m 의 최대공약수 
		}
	}
	return gcd;
}