

#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int* arr = new int[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int l = 0;
    std::cin >> l;
    int r = 0;
    std::cin >> r;
    for (int i = l; i <= r; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    std::cout << max;

    return EXIT_SUCCESS;
    



}

