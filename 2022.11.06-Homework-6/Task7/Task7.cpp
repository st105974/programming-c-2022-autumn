#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int a[100]{ 0 };
    int max = -101;
    int maxI = 0;
    int min = 101;
    int minI = 0;
    int k = 1;
    int l = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxI = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minI = i;
        }
    }
    if (minI > maxI)
    {
        for (maxI + 1; maxI < minI - 1; maxI++)
        {
            k *= a[maxI+1];
        }
    }
    else
    {
        for (minI+1; minI < maxI-1; minI++)
        {
            k *= a[minI+1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            l += a[i];
        }
    }
    std::cout << l << ' ' << k;
    return EXIT_SUCCESS;
}

