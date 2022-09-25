#include <iostream>
int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return EXIT_SUCCESS;
}