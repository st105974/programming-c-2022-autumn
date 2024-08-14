#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <cmath>
using namespace std;
const int n1 = 10 ^ 6;
bool prime(int n)
{
	if (n == 1) return false;
	if (n % 2 == 0 && n != 2) // отдельно проверим делимость на 2
		return false;
	for (int i = 3; i * i <= n; i += 2)
		if (n % i == 0)
			return false;
	// выход из функции, как только нашли делитель
	return true; // цикл закончился, делителей не нашлось
}
int prime_numbers(int n)
{
	int k = 0;
#pragma omp parallel sections reduction(+:k)
	{
#pragma omp section
		{
			for (int i = 3; i <= n; i += 4)
			{
				if (prime(i) == true)
				{
					k++;
				}
			}
		}
#pragma omp section
		{
			for (int i = 5; i <= n; i += 4)
			{
				if (prime(i) == true)
				{
					k++;
				}
			}
		}
	}
	return k;
}
int main()
{
	cout << prime(n1);
	return EXIT_SUCCESS;
}
