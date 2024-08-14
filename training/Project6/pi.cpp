#include <omp.h>
#include <cstdlib>
#include <iostream>
using namespace std;
#include <cmath>

const int n = 100000000;

double func(double x) {
    return 1 / (1 + x * x);
}

double variable(int i) {
    return ((2 * i - 1) / (2.0 * n));
}

int main()
{
    double Pi = 0;
    cout << "Static without parameter" << endl;
    double t = omp_get_wtime();
#pragma omp parallel sections reduction(+:Pi)
    {
#pragma omp parallel for schedule (static)
        for (int i = 1; i <= n; i++)
        {
            Pi += func(variable(i));
        }
    }
    cout << omp_get_wtime() - t << endl;
    cout << Pi * 4 / n << endl;


    cout << "Dynamic with parameter = 10" << endl;
    double Pi1 = 0;
    t = omp_get_wtime();
#pragma omp parallel sections reduction(+:Pi1)
    {
#pragma omp parallel for schedule (dynamic, 10)
        for (int i = 1; i <= n; i++)
        {
            Pi1 += func(variable(i));
        }
    }
    cout << omp_get_wtime() - t << endl;
    cout << Pi1 * 4 / n << endl;


    cout << "Guided with parameter = 10" << endl;
    double Pi2 = 0;
    t = omp_get_wtime();
#pragma omp parallel sections reduction(+:Pi2)
    {
#pragma omp parallel for schedule (guided, 10)
        for (int i = 1; i <= n; i++)
        {
            Pi2 += func(variable(i));
        }
    }
    cout << omp_get_wtime() - t << endl;
    cout << Pi2 * 4 / n << endl;
    return 0;
}