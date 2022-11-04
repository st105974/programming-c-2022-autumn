

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "(AX+B) : (CX+D)=0" << std::endl;
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;
    std::cout << "Enter a number A" << std::endl;
    std::cin >> a;
    std::cout << "Enter a number B" << std::endl;
    std::cin >> b;
    std::cout << "Enter a number C" << std::endl;
    std::cin >> c;
    std::cout << "Enter a number D" << std::endl;
    std::cin >> d;
    if (c == d && d == 0)
    {
        std::cout << "Restart the programm and change numbers";
    }
    else
    {
        if (b == 0 && a == 0)
        {
            std::cout << "INF";
        }
        if ((b % a != 0) || (b * c == a * d) || (a == 0 && b != 0))
        {
            std::cout << "NO";
        }
        else
        {
            std::cout << -b / a;
        }
        return EXIT_SUCCESS;
    }
   
    
    
    
}

