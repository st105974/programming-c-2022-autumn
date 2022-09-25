#include <iostream>
int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    std::cout << a * (1 % (a / (b + 1) + 1)) + b * (1 % (b / a + 1)) << std::endl;
    return EXIT_SUCCESS;
}