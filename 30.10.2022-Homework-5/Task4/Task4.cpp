#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = 0;
    std::cin >> n;
    int* a = new int [n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 2; i < n; i++)
    {
        if (max < (a[i - 2] + a[i - 1] + a[i]))
        {
            max = a[i - 2] + a[i - 1] + a[i];
        }
    }
    std::cout << max;
    return EXIT_SUCCESS;
}


