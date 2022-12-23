#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int a[30000]{ 0 };
	int t = 0;
	int min = 0;
	int max = 0;
	min = 10000;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		std::cin >> t;
		a[t]++;
		if (max < t) {
			max = t;
		}
		if (min > t) {
			min = t;
		}
	}
	for (int i = 0; i < m; i++)
	{
		std::cin >> t;
		if (a[t] != 0) {
			a[t] = -1;
		}
		if (max < t) {
			max = t;
		}
		if (min > t) {
			min = t;
		}
	}
	for (; min <= max; min++)
	{
		if (a[min] == -1)
		{
			std::cout << min << " ";
		}
	}
	return EXIT_SUCCESS;
}
