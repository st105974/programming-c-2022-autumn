#include <iostream>

int main(int argc, char* argv [])
{
    int x = 0;
    int count = 0;
    int i;
    std::cin >> x;
    for (i = 1; i * i < x; i++)
    {
        if (x % i == 0)
        {
            count += 2;
        }
    }
    if (i * i == x)
    {
        count++;
    }
    std::cout << count;
    return EXIT_SUCCESS;
}

