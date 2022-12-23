#include <iostream>

int f(int a, int n)
{
    if (a > n) return 0;
    if (a == n) return 1;
    if (a < n) return f(a + 3, n) + f(a + 5, n);
}

int main(int argc, char* argv[])
{
    int n = 0;
    int a = 1;
    std::cin >> n;
    if (f(a, n) > 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return EXIT_SUCCESS;
}

