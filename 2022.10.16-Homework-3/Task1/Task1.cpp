#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    while (b > a)
    {
        std::cout << a << std::endl;
        a++;
    }
    return EXIT_SUCCESS;
}
