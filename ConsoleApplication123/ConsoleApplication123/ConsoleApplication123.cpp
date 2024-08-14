#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int left = 0;
    int right = n;
    int mid = 0;
    int* a = new int[n];
    int k = 0;
    std::cin >> k;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    mid = (left + right) / 2;
    while (left != right)
    {
        if (k > a[mid])
        {
            left = mid + 1;
        }
        if (k < a[mid])
        {
            right = mid + 1;
        }
        if (k == a[mid])
        {
            right = left;
        }
    }
    return EXIT_SUCCESS;
    
}
