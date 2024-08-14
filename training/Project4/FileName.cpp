#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <cmath>
using namespace std;
const double n = 100000000;
int main()
{
	double pi = 0;
#pragma omp parallel sections reduction(+:pi)
	{
#pragma omp section
		{
			for (double i = 1; i <= n / 2; ++i)
			{
				pi += 16 * n / (4 * n * n + 4 * i * i - 4 * i);
			}
		}
#pragma omp section
		{
			for (double i = n / 2 + 1; i <= n; ++i)
			{
				pi += 16*n/ (4*n*n+4*i*i - 4*i);
			}
		}
	}
	cout << pi;
	return EXIT_SUCCESS;
}
