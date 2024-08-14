#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <cmath>
using namespace std;
const double PI = 3.141592653589793;
const int n = 100000000;
double a[n];
int main()
{
	double j = PI / (2 * n);
#pragma omp parallel sections
	{
#pragma omp section
		{
			for (int i = 0; i <= n / 2; ++i)
			{
				a[i] = sin(i * j);
			}
		}
#pragma omp section
		{
			for (int i = n / 2 + 1; i < n; ++i)
			{
				a[i] = sin(i * j);
			}
		}
	}
	cout << a[24];
	return EXIT_SUCCESS;
}
