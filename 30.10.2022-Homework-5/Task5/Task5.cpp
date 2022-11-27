

#include <iostream>

int main(int atgc, char* argv[])
{
    int n = 0;
    int x = 0;
    int abs = 0;
    int dif = 0;
    int dif1 = 1000;
    int dif2 = 1000;
    std::cin >> n;
    int a[1000]{ 0 };
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x >= a[i])
        {
            abs = x - a[i];
            if (abs < dif1)
            {
                dif1 = abs;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x < a[i])
        {
            abs = a[i] - x;
            if (abs < dif2)
            {
                dif2 = abs;
            }
        }
    }
    if (dif1 > dif2)
    {
        dif = dif2;
    }
    else
    {
        dif = dif1;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (x < 0)
        {
            if (a[i] - dif == x)
            {
                std::cout << a[i];
            }
        }
        else
            if (a[i] + dif == x)
            {
                std::cout << a[i];
            }
    }

    
    return EXIT_SUCCESS;
}

