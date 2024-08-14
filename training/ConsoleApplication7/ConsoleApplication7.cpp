#include <iostream>
class Polynomial
{
public:
    Polynomial()
    {
        n = 0;
        p = 0;
    }
    Polynomial(int k, double* a)
    {
        n = k;
        p = new double[n+1];
        for (int i = 0; i < n+1; ++i)
        {
            p[i] = a[i];
        }
    }
    Polynomial(const Polynomial& f)
    {
        n = f.n;
        p = new double[n+1];
        for (int i = 0; i < n+1; ++i)
        {
            p[i] = f.p[i];
        }
    }
    ~Polynomial()
    {
        delete[] p;
    }
    Polynomial& operator=(const Polynomial& f)
    {
        if (this == &f)
        {
            return *this;
        }
        else
        {
            delete[] p;
            n = f.n;
            p = new double[n+1];
            for (int i = 0; i < n+1; ++i)
            {
                p[i] = f.p[i];
            }
            return *this;
        }
    }
    double& operator[](int k)
    {
        return p[k];
    }
    friend Polynomial operator+(Polynomial f, Polynomial g);
    friend Polynomial operator*(Polynomial f, Polynomial g);
    void print()
    {
        {
            std::cout << p[0];
            for (int i = 1; i < n+1; ++i)
            {
                std::cout << " " << "+" << " " << p[i] << "*" << "x^" << i;
            }
            std::cout << std::endl;
        }
    }
private:
    int n;
    double* p;
};
Polynomial operator+(Polynomial f, Polynomial g)
{
    if (f.n >= g.n)
    {
        Polynomial h(f);
        for (int i = 0; i < g.n+1; ++i)
        {
            h[i] += g[i];
        }
        return h;
    }
    else
    {
        Polynomial h(g);
        for (int i = 0; i < f.n+1; ++i)
        {
            h[i] += f[i];
        }
        return h;
    }
}
Polynomial operator*(Polynomial f, Polynomial g)
{
    double* q;
    q = new double[f.n + g.n + 1];
    for (int i = 0; i < f.n + g.n + 1; ++i)
    {
        q[i] = 0;
    }
    for (int k = 0; k < f.n + g.n + 1; ++k)
    {
        for (int i = 0; i <= k; ++i)
        {
            q[k] += f[i] * g[k - i];
        }
    }
    return Polynomial(f.n + g.n, q);
}
int main()
{
    int n = 0;
    std::cin >> n;
    double* b = new double[n + 1];
    Polynomial g(n, b);
    for (int i = 0; i < n + 1; ++i)
    {
        std::cin >> g[i];
    }
    g.print();
    int m = 0;
    std::cin >> m;
    double* a = new double[m + 1];
    Polynomial f(m, a);
    for (int i = 0; i < m+1; ++i)
    {
        std::cin >> f[i];
    }
    f.print();
    (f * g).print();
    return EXIT_SUCCESS;
}
