#include <iostream>
#include <cmath>
struct Complex
{
	double re, im;
	Complex()
	{
		re = 0;
		im = 0;
	}
	Complex(double r, double i)
	{
		re = r;
		im = i;
	}
	void print()
	{
		std::cout << re << "+" << im << "*" << "i" << std::endl;
	}
	double module()
	{
		return sqrt(re * re + im * im);
	}
	friend Complex operator+(Complex z, Complex w);
	friend Complex operator-(Complex z, Complex w);
	friend Complex operator*(Complex z, Complex w);
	friend Complex operator/(Complex z, Complex w);
};
Complex operator+(Complex z, Complex w)
{
	return Complex(z.re + w.re, z.im + w.im);
}
Complex operator-(Complex z, Complex w)
{
	return Complex(z.re - w.re, z.im - w.im);
}
Complex operator*(Complex z, Complex w)
{
	return Complex(z.re * w.re - z.im * w.im, z.re * w.im + z.im * w.re);
}
Complex operator/(Complex z, Complex w)
{
	return Complex((z.re * w.re + z.im * w.im) / (w.re * w.re + w.im * w.im), (z.im * w.re - z.re * w.im) / (w.re * w.re + w.im * w.im));
}
int main()
{
	return EXIT_SUCCESS;
}

