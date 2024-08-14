#include <iostream>

const int Max = 3;
struct Polynomial
{
    float a[Max + 1];
    Polynomial()
    {
        for (int i = 0; i < Max + 1; ++i)
        {
            a[i] = 0;
        }
    }
    Polynomial(float b[Max + 1])
    {
        for (int i = 0; i < Max + 1; ++i)
        {
            a[i] = b[i];
        }
    }
    void print()
    {
        std::cout << a[0];
        for (int i = 1; i < Max + 1; ++i)
        {
            std::cout << " " << "+" <<" "<< a[i] << "*" << "x^" << i;
        }
    }
    float value(float x)
    {
        float k = a[Max];
        for (int i = Max; i >= 1; --i)
        {
            k *= x;
            k += a[i - 1];
        }
        return k;
    }
    float dif(float x)
    {
        float d = Max*a[Max];
        for (int i = Max; i >= 2 ; --i)
        {
            d *= x;
            d += (i-1)*a[i - 1];
        }
        return d;
    }

};
int main()
{
    Polynomial f;
    for (int i = 0; i < Max; ++i)
    {
        std::cin >> f.a[i];
    }
    f.print();
    std::cout << std::endl << f.dif(3);
    return EXIT_SUCCESS;
}