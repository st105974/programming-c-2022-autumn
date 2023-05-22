#include "Fraction.h"
int Fraction::gcd(int num, int den)
{
	num = abs(num);
	den = abs(den);
	if (num == 0 || den == 0)
	{
		return num + den;
	}
	if (num>den)
	{
		return gcd(den, num);
	}
	return gcd(num, den % num);
}

void Fraction::reduction()
{
	int GCD = gcd(num, den);
	num = num / GCD;
	den = den / GCD;
}

Fraction Fraction::operator=(const Fraction& fr)
{
	this->num = fr.num;
	this->den = fr.den;
	reduction();
	return *this;
}

Fraction Fraction::operator+(const int& n)
{
	return Fraction(num + n * den, den);
}
Fraction Fraction::operator-(const int& n)
{
	return Fraction(num - n * den, den);
}
Fraction Fraction::operator*(const int& n)
{
	return Fraction(num * n, den);
}
Fraction Fraction::operator/(const int& n)
{
	return Fraction(num, den * n);
}

Fraction Fraction::operator+(const Fraction& fr)
{
	return Fraction(num * fr.den + den * fr.num, den * fr.num);
}
Fraction Fraction::operator-(const Fraction& fr)
{
	return Fraction(num * fr.den - den * fr.num, fr.num * fr.den);
}
Fraction Fraction::operator*(const Fraction& fr)
{
	return Fraction(num * fr.num, den * fr.den);
}
Fraction Fraction::operator/(const Fraction& fr)
{
	return Fraction(num * fr.den, den * fr.num);
}

Fraction operator+(const int& n, const Fraction& fr)
{
	return Fraction(fr.num + fr.den * n, fr.den);
}
Fraction operator-(const int& n, const Fraction& fr)
{
	return Fraction(n * fr.den - fr.num, fr.den);
}
Fraction operator*(const int& n, const Fraction& fr)
{
	return Fraction(fr.num * n, fr.den);
}
Fraction operator/(const int& n, const Fraction& fr)
{
	return Fraction(fr.den * n, fr.num);
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fr)
{
	stream << fr.num << "/" << fr.den;
	return stream;
}
