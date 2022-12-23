#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < (m + 1) / 2; ++j)
		{
			std::swap(a[i][j], a[i][m - 1 - j]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	return EXIT_SUCCESS;
}
