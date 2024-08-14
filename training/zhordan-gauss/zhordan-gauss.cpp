#include <iostream>
#include <omp.h>
#include <cstdlib>
using namespace std;
#include <cmath>

void divide(double** arr, int i, double lambda, int n)
{
    for (int j = 0; j < n+1; ++j)
    {
        arr[i][j] = arr[i][j] / lambda;
    }
}
void subtract(double** arr, int i, int p, double lambda, int n)
{
    for (int j = 0; j < n + 1; ++j)
    {
        arr[p][j] = arr[p][j] - lambda * arr[i][j];
    }
}
void Swap(double** arr, int i, int p, int n)
{
    double c = 0;
    for (int j = 0; j < n+1; ++j)
    {
        c = arr[i][j];
        arr[i][j] = arr[p][j];
        arr[p][j] = c;
    }
}
void transform(double** arr, int n)
{
    for (int j = 0; j < n; ++j)
    {
        double maxim = -1000;
        int row = 0;
        for (int i = j; i < n; ++i)
        {
            if (maxim <= fabs(arr[i][j]))
            {
                maxim = arr[i][j];
                row = i;
            }
        }
        if (maxim == 0)
        {
            cout << "rank of that matrix has value 0" << endl;
            break;
        }
        divide(arr, row, maxim, n);
        Swap(arr, row, j, n);
        for (int i = j + 1; i < n; ++i)
        {
            subtract(arr, j, i, arr[i][j], n);
        }
    }
    for (int j = n - 1; j > 0; --j)
    {
        for (int i = j - 1; i >= 0; --i)
        {
            subtract(arr, j, i , arr[i][j], n);
        }
    }
}
int main()
{
    int n = 5;
    double** arr = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new double[n+1];
    }
    /*arr[0][0] = 3;
    arr[0][1] = 2;
    arr[0][2] = -3;
    arr[0][3] = 10;
    arr[1][0] = 4;
    arr[1][1] = -3;
    arr[1][2] = 2;
    arr[1][3] = 8;
    arr[2][0] = 5;
    arr[2][1] = -2;
    arr[2][2] = 6;
    arr[2][3] = 17;*/

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n+1; ++j)
        {
            arr[i][j] = rand()%1000;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n + 1; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    transform(arr, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n + 1; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        delete arr[i];
    }
    delete[] arr;
}
