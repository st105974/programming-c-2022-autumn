

#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int a[100];
    int m = 0;
    int k1 = 0;
    int k2 = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> m;
    for (int i = 1; i < m; i++)
    {
        std::cin >> k1 >> k2;
        for (int j = k1 - 1; j < k2; j++)
        {
            std::cout << a[j] << ' ';
        }
        std::cout << std::endl;

    }

}

