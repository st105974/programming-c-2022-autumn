

#include <iostream>

int main(int atgc, char* argv[])
{
    int v[100]{ 0 };
    float p[100]{ 0 };
    int n = 0;
    double налог = 0;
    double x = 0;
    int ans = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i] >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        налог = v[i] * p[i] / 100;
        if (x < налог)
        {
            x = налог;
            ans = i + 1;

        }
    }
    std::cout << ans;

    return EXIT_SUCCESS;

    
}


