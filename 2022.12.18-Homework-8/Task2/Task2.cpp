#include <iostream>

int F(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        return F(n - 1) + F(n - 2);
    }
}
    
int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    std::cout << F(n);
    return EXIT_SUCCESS;
}

