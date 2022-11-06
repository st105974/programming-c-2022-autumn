

#include <iostream>

int main(int argc, char* argv[])
{
    int n = 1;
    int count = 0;
    while (n != 0)
    {
        std::cin >> n;
        if (n < 0)
        {
            count++;
        }
        
    }
    std::cout << count;
    return EXIT_SUCCESS;
    
}
