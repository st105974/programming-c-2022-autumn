#include <iostream>

int** f(int direction, int n, int** a, int b, int t)
{
	{
		if (b == n * n)
		{
			return a;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[t][i] == 0)
				{
					b += 1;
					a[t][i] = b;
				}
			}
			return f(direction + 1, n, a, b, t);
		}
		else if (direction == 1)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i][n - t - 1] == 0)
				{
					b += 1;
					a[i][n - t - 1] = b;
				}
			}
			return f(direction + 1, n, a, b, t);
		}
		else if (direction == 2)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[n - t - 1][n - i - 1] == 0)
				{
					b += 1;
					a[n - t - 1][n - i - 1] = b;
				}
			}
			return f(direction + 1, n, a, b, t);
		}
		else if (direction == 3)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[n - i - 1][t] == 0)
				{
					b += 1;
					a[n - i - 1][t] = b;
				}
			}
			return f(0, n, a, b, t + 1);
		}
	}

}
int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int [n]{0};
    }
	arr = f(0, n, arr, 0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
	return EXIT_SUCCESS;
}


