#include <omp.h>
#include <cstdlib>
#include <iostream>
using namespace std;
#include <cmath>

double f(double x)
{
	return 1 / (1 + x * x);
}
double integr(double a, double b, double (*g)(double))
{
	double sum = (g(a) + g(b)) / 2.0;
	double x = 0;
	double h = (b -a) / 10.0;
	for (int i = 1; i <= 9; ++i)
	{
		x = a + i * h;
		sum += g(x);
	}
	return sum*h;
}
double integral(double a, double b, double (*g)(double))
{
	if (abs(integr(a, b, g) - integr(a, (a + b) / 2.0, g) - integr((a + b) / 2.0, b, g)) < 1e-10)
	{
		return integr(a, b, g);
	}
	else
	{
		double result_left = 0;
		double result_right = 0;
#pragma omp task shared(result_left)
		result_left = integral(a, (a + b) / 2.0, g);
#pragma omp task shared(result_right)
		result_right = integral((a + b) / 2.0, b, g);
#pragma omp taskwait
		return result_left + result_right;
	}
}
int main()
{
	double a = 1.0;
	double b = 3.0;
	double result = 0.0;
#pragma omp parallel
	{
#pragma omp single
		result = integral(a, b, f);
	}
	cout << result;
	return EXIT_SUCCESS;
}
