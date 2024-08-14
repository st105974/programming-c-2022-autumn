#include <iostream>
struct robot
{
    int x;
    int y;
    int n;
    robot()
    {
        x = 0;
        y = 0;
        n = 0;
    }
    robot(int x1, int y1, int n1)
    {
        x = x1;
        y = y1;
        n = n1;
    }
    void povorot(bool a)
    {
        if (a == true)
        {
            n = (n + 1) % 4;
        }
        else
        {
            n = (n + 3)%4;
        }
    }
    void go(int k)
    {
        if (n == 0)
        {
            x = x + k;
        }
        else if (n == 1)
        {
            y = y + k;
        }
        else if (n == 2)
        {
            x = x - k;
        }
        else if (n == 3)
        {
            y = y - k;
        }
    }
    void print()
    {
        std::cout << x << " " << y;
    }
};
int main()
{
    robot a;
    a.go(4);
    a.print();
    return EXIT_SUCCESS;
}
