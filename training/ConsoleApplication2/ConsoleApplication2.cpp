#include <iostream>

struct fraction
{
    int num;
    int denom;
    fraction()
    {
        num = 1;
        denom = 1;
    }
    fraction(int a, int b)
    {
        if (num * denom >= 0)
        {
            num = abs(a) / gcd(a, b);
            denom = abs(b) / gcd(a, b);
        }
        else
        {
            num = -abs(a)/gcd(a, b);
            denom = abs(b)/gcd(a, b);
        }
    }
    fraction operator+ (fraction a)
    {
        return fraction(num * a.denom + a.num * denom  ,  a.denom * denom);
    }
    fraction operator* (fraction a)
    {
        return fraction(a.num * num, a.denom * denom);
    }
    fraction operator/ (fraction a)
    {
        return fraction(num * a.denom, denom * a.num);
    }
    fraction operator- (fraction a)
    {
        return fraction(num * a.denom - a.num * denom, a.denom * denom);
    }
    bool operator== (fraction a)
    {
        return (num * a.denom == denom * a.num);
    }
    bool operator> (fraction a)
    {
        return (num * a.denom - a.num * denom > 0);
    }
    bool operator< (fraction a)
    {
        return (num * a.denom - a.num * denom < 0);
    }
    bool operator<= (fraction a)
    {
        return (num * a.denom - a.num * denom <= 0);
    }
    bool operator>= (fraction a)
    {
        return (num * a.denom - a.num * denom >= 0);
    }
    bool operator!= (fraction a)
    {
        return (num * a.denom - a.num * denom != 0);
    }
    void print()
    {
        std::cout << num << "/" << denom;
    }
    int gcd(int a, int b)
    {
        int c;
        while (b != 0) { c = a % b; a = b; b = c; }
        return a;
    }
};

int main()
{
    fraction a;
    fraction b;
    fraction c;
    bool k = 0;
    b.num = 1;
    b.denom = 2;
    a.num = 3;
    a.denom = 2;
    c = a - b;
    c.print();
    
    return EXIT_SUCCESS;
}
