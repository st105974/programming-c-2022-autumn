

#include <iostream>

int main(int argc, char* argv[])
{
    int N = 0;
    int M = 0;
    int x = 0;
    int y = 0;
    std::cin >> M >> N >> x >> y;
    if (1 <= x <= N)
    {
        std::cout << x - 1 << " " << y << std::endl;
        std::cout << x + 1 << " " << y << std::endl;
        
    }
    if (1 <= y <= M)
    {
        std::cout << x << " " << y + 1 << std::endl;
        std::cout << x << " " << y - 1 << std::endl;
    }
    
    
    return EXIT_SUCCESS;
    
    
}

