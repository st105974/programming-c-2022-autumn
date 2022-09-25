#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	b = a + 2 - a % 2;
	std::cout << b << std::endl;
	return EXIT_SUCCESS;
}