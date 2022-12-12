#include <iostream>

int min(int a, int b, int c, int d)
{
    if (a < b && a < c && a < d) return a;
    if (b < a && b < c && c < d) return min(b, a, c, d);
    if (c < a && c < b && c < d) return min(c, a, b, d);
    if (d < a && d < b && d < c) return min(d, a, b, c);
}
int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a >> b >> c >> d;
    std::cout << min(a, b, c, d);
    return EXIT_SUCCESS;
    
    
}


