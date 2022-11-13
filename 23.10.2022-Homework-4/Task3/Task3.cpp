

#include <iostream>

int main(int argv, char* argc[])
{
    int n = 0;
    std::cin >> n;
    int k = 0;
    for (int i = 1; i <= n && k < n; i++)
    {
        for (int j = 0; j < i && k < n; j++)
        {
            std::cout << i;
            k++;
        }
    }
    

    return EXIT_SUCCESS;
}


