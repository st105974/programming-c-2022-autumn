#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 1;
	int itog = 0;
	std::cin >> n;
	for (;n != 0;)
	{
		itog += (n % 10) * m;
		n = n / 10;
		m *= 2;


	}
	std::cout << itog;
	return EXIT_SUCCESS;
}

