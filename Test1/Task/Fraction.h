#pragma once
#include<cmath>
#include<ostream>

class Fraction
{private:
	int num;
	int den;

	int gcd(int num, int den);
	void reduction();

public:
	Fraction(int num = 0, int den = 1) : num(num), den(den) { reduction(); }
	Fraction(const Fraction& an) : num(an.num), den(an.den) { reduction(); }
	~Fraction() {};

	Fraction operator=(const Fraction& fr);

	Fraction operator+(const int& n);
	Fraction operator-(const int& n);
	Fraction operator*(const int& n);
	Fraction operator/(const int& n);

	friend Fraction operator+(const int& n, const Fraction& fr);
	friend Fraction operator-(const int& n, const Fraction& fr);
	friend Fraction operator*(const int& n, const Fraction& fr);
	friend Fraction operator/(const int& n, const Fraction& fr);

	Fraction operator+(const Fraction& fr);
	Fraction operator-(const Fraction& fr);
	Fraction operator*(const Fraction& fr);
	Fraction operator/(const Fraction& fr);

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fr);
};

