#include <iostream>

int main(int argc, char* argv[])
{
    int a[100]{ 0 };
    int n = 0;
    std::cin >> n;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            std::cout << a[i] << " ";
            count1++;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            std::cout << a[i] << " ";
            count2++;
        }
    }
    std::cout << std::endl;
    if (count1 > count2)
    {
        std::cout << "NO";
    }
    else
    {
        std::cout << "YES";
    }
    return EXIT_SUCCESS;
}

