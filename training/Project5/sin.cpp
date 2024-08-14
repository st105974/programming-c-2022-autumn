#include <omp.h>
#include <cstdlib>
#include <iostream>
using namespace std;
#include <cmath>

const int n = 100000000;
double a[100000000];
const double pi = 3.1415926535897932;
int main()
{
    cout << "Static without parameter" << endl;
    double t = omp_get_wtime();
#pragma omp parallel for schedule (static)
    for (int i = 0; i < n; i++)
    {
        a[i] = sin(pi / (2 * n) * i);
    }
    cout << omp_get_wtime() - t << endl;

    cout << "Dynamic with parameter = 100" << endl;
    t = omp_get_wtime();
#pragma omp parallel for schedule (dynamic, 100)
    for (int i = 0; i < n; i++)
    {
        a[i] = sin(pi / (2 * n) * i);
    }
    cout << omp_get_wtime() - t << endl;

    cout << "Guided with parameter = 100" << endl;
    t = omp_get_wtime();
#pragma omp parallel for schedule (guided, 100)
    for (int i = 0; i < n; i++)
    {
        a[i] = sin(pi / (2 * n) * i);
    }
    cout << omp_get_wtime() - t << endl;
    return 0;
}
