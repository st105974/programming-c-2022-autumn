#include <iostream>
class car
{public:
    car()
    {
        x = 500;
        y = 500;
        n = 1;
    }
    car(int a, int b, int k)
    {
        x = a;
        y = b;
        n = k;
    }
    void right()
    {
        n = (n + 3) % 4;
    }
    void left()
    {
        n = (n + 1) % 4;
    }
    int forward(int a)
    {
        int k = 0;
        if (n == 0)
        {
            if (x + a <= 1000)
            {
                x = x + a;
                k = a / 100;
                return k;
            }
            else
            {
                k = (1000 - x)/100;
                x = 1000;
                return k;
            }
        }
        else if (n == 1)
        {
            if (y + a <= 1000)
            {
                y = y + a;
                k = a / 100;
                return k;
            }
            else
            {
                k = (1000 - y) / 100;
                y = 1000;
                return k;
            }
        }
        else if (n == 2)
        {
            if (x - a >= 0)
            {
                x = x - a;
                k = a / 100;
                return k;
            }
            else
            {
                k = x / 100;
                x = 0;
                return k;
            }
        }
        else if (n == 3)
        {
            if (y - a >= 0)
            {
                y = y - a;
                k = a / 100;
                return k;
            }
            else
            {
                k = y / 100;
                y = 0;
                return k;
            }
        }
    }
    void print()
    {
        std::cout << x << " " << y << " " << n;
    }
private:
    int x;
    int y;
    int n;

};
class bus : public car
{public:
    bus() :car(0, 0, 0)
    {
        p = 0;
        m = 0;
    }
    bus(int a1, int a2, int a3, int a4, int a5): car(a1, a2, a3)
    {
        p = a4;
        m = a5;
    }
    void enter(int c)
    {
        p += c;
    }
    void exit(int c)
    {
        p -= c;
    }
    int forward(int a)
    {
        int k = car::forward(a);
        m += p * k;
        return k;
    }
    int AmountMoney()
    {
        return m;
    }
    void print()
    {
        std::cout << std::endl;
        car::print();
        std::cout << " " << p << " " << m;
    }
private:
    int p;
    int m;
};
int main()
{
    car niva;
    bus buhanka;
    buhanka.enter(10);
    buhanka.forward(300);
    niva.forward(300);
    niva.right();
    niva.forward(210);
    niva.print();
    buhanka.print();
    return EXIT_SUCCESS;
}


