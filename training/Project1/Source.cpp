#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <cmath>
using namespace std;
const int n1 = 1e7;
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
int prime_numbers_static(int n)
{
	int k = 0;
#pragma omp parallel for schedule (static, 100) reduction(+:k)
	for (int i = 3; i <= n; i+=2)
	{
		if (prime(i) == true)
		{
			k++;
		}
	}
	return k;
}
int prime_numbers_dynamic(int n)
{
	int k = 0;
#pragma omp parallel for schedule (dynamic, 10) reduction(+:k)
	for (int i = 3; i <= n; i += 2)
	{
		if (prime(i) == true)
		{
			k++;
		}
	}
	return k;
}
int prime_numbers_guided(int n)
{
	int k = 0;
#pragma omp parallel for schedule (guided, 10) reduction(+:k)
	for (int i = 3; i <= n; i += 2)
	{
		if (prime(i) == true)
		{
			k++;
		}
	}
	return k;
}
int main()
{
	double t = omp_get_wtime();
	cout << prime_numbers_static(n1) << endl;
	cout << prime_numbers_dynamic(n1) << endl;
	cout << prime_numbers_guided(n1) << endl;
	cout << "Time: " << omp_get_wtime() - t << endl;
	return EXIT_SUCCESS;
}