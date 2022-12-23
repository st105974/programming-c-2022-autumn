#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int a[1000]{ 0 };
    int minI = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] < a[minI]) minI = i;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[(minI + i) % n] << ' ';
    }
    return EXIT_SUCCESS;
}   

