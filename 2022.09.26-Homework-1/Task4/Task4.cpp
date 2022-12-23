#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	const int L = 109;
	std::cin >> v >> t;
	std::cout << (L + v * t % L) % L << std::endl;
	return EXIT_SUCCESS;
}