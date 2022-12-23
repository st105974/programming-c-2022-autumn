#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        {
            std::cout << "right triangle";
        }
        else if (a * a + b * b > c * c || a * a + c * c > b * b || c * c + b * b > a * a)
        {
            std::cout << "acute triangle";
        }
        else if (a * a + b * b < c * c || a * a + c * c < b * b || c * c + b * b < a * a)
        {
            std::cout << "obtuse triangle";
        }
    }
    else
    {
        std::cout << "the triangle does not exist";
    }
    return EXIT_SUCCESS;
}


