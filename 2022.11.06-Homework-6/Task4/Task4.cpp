#include <iostream>
int main(int argc, char* argv[])
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int k = 0;
    int t = 0;
    int arr[100]{0};
    std::cin >> n >> a >> b >> c >> d;
    for (int i = 0; i < n; ++i)
    {
        arr[i] = i+1;
    }
    for (int i = 0; i <= (b - a)/2; i++)
    {
        k = arr[a + i];
        arr[a + i] = arr[b - i];
        arr[b - i] = k;
    }
    for (int i = 0; i <= (d - c) / 2; i++)
    {
        t = arr[c + i];
        arr[c + i] = arr[d - i];
        arr[d - i] = t;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return EXIT_SUCCESS;
}

