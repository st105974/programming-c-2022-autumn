#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int sum = 0;
	std::cin >> a;
	sum = a % 10 + a / 10 % 10 + a / 100 % 10;
	std::cout << sum << std::endl;
	return EXIT_SUCCESS;

}