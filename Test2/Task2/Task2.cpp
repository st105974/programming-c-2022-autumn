#include <iostream>
void g(int arr[10000] = {0}, int n = 0)
{
    if (n != 0)
    {
        std::cout << arr[n - 1] << " ";
        return g(arr, n - 1);
    }
}
int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int arr[10000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    g(arr, n);
    return EXIT_SUCCESS;
}


