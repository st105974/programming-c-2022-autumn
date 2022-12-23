#include <iostream>

int main()//a = k; st = b; i = c
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	std::cin >> n;
	do {
		do {
			std::cout << (((b + c) < n) ? a++ : a--) << " ";
			c++;
		} while (c < n);
		std::cout << std::endl;;
		c = 0;
		b++;
		a = b;
	} while (b <= n);
	return EXIT_SUCCESS;
}


