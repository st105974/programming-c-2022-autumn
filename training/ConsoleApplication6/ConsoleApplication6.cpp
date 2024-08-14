#include <iostream>
class SetInteger
{
public:
    SetInteger()
    {
        k = 0;
        a = nullptr;
    }
    SetInteger(int m)
    {
        k = m;
        a = new int[m];
        for (int i = 0; i < m; ++i)
        {
            a[i] = 0;
        }
    }
    void put(int b)
    {
        if (b > k)
        {
            int* p = new int[b + 1];
            for (int i = 0; i < k; ++i)
            {
                p[i] = a[i];
            }
            for (int i = k; i < b; ++i)
            {
                p[i] = 0;
            }
            p[b] = 1;
            k = b + 1;
            delete[]a;
            a = p;
        }
        else
        {
            a[b] = 1;
        }
    }
    void remove(int b)
    {
        if (b <= k - 1)
        {
            a[b] = 0;
        }          
    }
    friend SetInteger operator+(SetInteger U, SetInteger V);
    friend SetInteger operator-(SetInteger U, SetInteger V);
    friend SetInteger operator*(SetInteger U, SetInteger V);
    friend SetInteger operator~(SetInteger U);
    void print()
    {
        for (int i = 0; i < k; ++i)
        {
            std::cout << a[i];
        }
        std::cout << std::endl;
    }
private:
    int k;
    int* a;
};
SetInteger operator~(SetInteger U)
{
    SetInteger W(U.k);
    for (int i = 0; i < U.k; ++i)
    {
        W.a[i] = !U.a[i];
    }
    return W;
}
SetInteger operator*(SetInteger U, SetInteger V)
{
    if (U.k >= V.k)
    {
        SetInteger W(V.k);
        for (int i = 0; i < V.k; ++i)
        {
            W.a[i] = U.a[i] && V.a[i];
        }
        return W;
    }
    else
    {
        SetInteger W(U.k);
        for (int i = 0; i < U.k; ++i)
        {
            W.a[i] = U.a[i] && V.a[i];
        }
        return W;
    }
}
SetInteger operator-(SetInteger U, SetInteger V)
{
    if (U.k >= V.k)
    {
        SetInteger W(U.k);
        for (int i = 0; i < U.k; ++i)
        {
            W.a[i] = U.a[i];
        }
        for (int i = 0; i < V.k; i++)
        {
            if (1 == V.a[i])
            {
                W.a[i] = 0;
            }
        }
        return W;
    }
    else
    {
        SetInteger W(U.k);
        for (int i = 0; i < U.k; ++i)
        {
            W.a[i] = U.a[i];
        }
        for (int i = 0; i < U.k; i++)
        {
            if (W.a[i] == V.a[i])
            {
                W.a[i] = 0;
            }
        }
        return W;
    }
}
SetInteger operator+(SetInteger U, SetInteger V)
{
    if (U.k >= V.k)
    {
        SetInteger W(U.k);
        for (int i = 0; i < U.k; ++i)
        {
            W.a[i] = U.a[i];
        }
        for (int i = 0; i < V.k; ++i)
        {
            W.a[i] = U.a[i] || V.a[i];
        }
        return W;
    }
    else
    {
        SetInteger W(V.k);
        for (int i = 0; i < V.k; ++i)
        {
            W.a[i] = V.a[i];
        }
        for (int i = 0; i < U.k; ++i)
        {
            W.a[i] = U.a[i] || V.a[i];
        }
        return W;
    }
}

int main()
{

    SetInteger a;
    SetInteger b;
    SetInteger c(10);
    b.put(5);
    a.put(6);
    a.put(5);
    a.print();
    b.print();
    c = a * b;
    a = ~c;
    a.print();
    
}

