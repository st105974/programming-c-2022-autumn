

#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int* arr = new int[n];
    int max = 0;
    int min = 100;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }

    return EXIT_SUCCESS;
}


