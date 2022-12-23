#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    std::cin >> n;
    int a[100]{ 0 };
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> k;
    if (k > 0)
    {
        k %= n;
        k = n - k;
    }
    else
    {
        k = -k;
        k %= n;
    }
    for (int i = k; i < n; i++)
    {
        std::cout << a[i] << ' ';
    }
    for (int i = 0; i < k; i++)
    {
        std::cout << a[i] << ' ';
    }
    return EXIT_SUCCESS;
}

