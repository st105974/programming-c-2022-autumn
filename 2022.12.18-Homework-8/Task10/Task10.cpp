#include <iostream>

int a[1000000]{ 0 };

int fun(int n)
{
	if (a[n] == -1)
	{
		return 1;
	}
	else
	{
		return fun(a[n]) + 1;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int l = 0;
	int d = 0;
	for (int i = 0; i < 1000000; i++)
	{
		a[i] = -1;
	}
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> k >> l;
		a[l] = k;
	}
	std::cin >> n;
	std::cout << fun(n);
	return EXIT_SUCCESS;
}