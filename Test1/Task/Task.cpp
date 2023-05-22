#include <iostream>
#include"Fraction.h"
int main(int argc, char*argv[])
{
    Fraction num(2,4);
    Fraction den(-1, 3);
    std::cout << num << " / " << den << " = " << num / den << std::endl;
    std::cout << num << " + " << den << " = " << num + den << std::endl;

    return EXIT_SUCCESS;
}

