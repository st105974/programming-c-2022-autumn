

#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int a[100] {0};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        k = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = k;

    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    return EXIT_SUCCESS;


}
