#include <iostream>

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	double k = 1;
	double l = 1;
	for (double i = 1; i <= n; i++)
	{
		l *= 1 / i;
		k += l;
	}
	std::cout << k;	
	return EXIT_SUCCESS;
}

