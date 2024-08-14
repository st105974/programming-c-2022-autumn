#include <iostream>

const int Max = 4;
class Polynomial {
private:
    float a[Max + 1];
public:
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
    void print();
    float value(float x);
    void set_coef(int degF, float coef);
    friend Polynomial operator+ (Polynomial f, Polynomial g);
    friend Polynomial operator- (Polynomial f, Polynomial g);
    friend Polynomial operator* (Polynomial f, Polynomial g);
};
Polynomial operator* (Polynomial f, Polynomial g)
{
    Polynomial h;
    for (int k = 0; k < Max + 1; ++k)
    {
        for (int i = 0; i <= k; ++i)
        {
            h.a[k] += f.a[i] * g.a[k-i];
        }
    }
    return h;
}
Polynomial operator+ (Polynomial f, Polynomial g)
{
    Polynomial h;
    for (int i = 0; i < Max + 1; ++i)
    {
        h.a[i] = g.a[i] + f.a[i];
    }
    return h;
}
Polynomial operator- (Polynomial f, Polynomial g)
{
    Polynomial h;
    for (int i = 0; i < Max + 1; ++i)
    {
        h.a[i] = f.a[i] - g.a[i];
    }
    return h;
}
void Polynomial::set_coef(int deg, float coef)
{
    a[deg] = coef;
}
void Polynomial::print()
{
    {
        std::cout << a[0];
        for (int i = 1; i < Max + 1; ++i)
        {
            std::cout << " " << "+" << " " << a[i] << "*" << "x^" << i;
        }
        std::cout << std::endl;
    }
}
float Polynomial::value(float x)
{
    float k = a[Max];
    for (int i = Max; i >= 1; --i)
    {
        k *= x;
        k += a[i - 1];
    }
    return k;
}
int main()
{
    int deg = 0;
    double coef = 0;
    Polynomial f;
    Polynomial g;
    for (int i = 0; i < Max + 1; ++i)
    {
        std::cin >> deg;
        std::cin >> coef;
        f.set_coef(deg, coef);
        g.set_coef(deg, coef);
    }
    (f + g).print();
    (f * g).print();
    return EXIT_SUCCESS;
}

