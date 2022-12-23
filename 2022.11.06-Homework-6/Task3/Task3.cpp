#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int a[100]{0};
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int x = 0;
    std::cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            ans = i+2;
        }
    }
    std::cout << ans;
    return EXIT_SUCCESS;
}


