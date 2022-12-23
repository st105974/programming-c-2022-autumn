#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	std::cin >> n >> m >> k;
	if ((m * n > k) && ((k % n == 0) || (k % m == 0)))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}


