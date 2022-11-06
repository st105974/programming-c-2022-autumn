

#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 1;
    int l = 1;
    std::cin >> n;
    do
    {
        do
        {
            std::cout << k++ << " ";
            

        } while (k != n + l);
        std::cout << std::endl;
        l++;
        k = l;
        
        
        
    } while (k <= n);
    return EXIT_SUCCESS
 

    
    
}


