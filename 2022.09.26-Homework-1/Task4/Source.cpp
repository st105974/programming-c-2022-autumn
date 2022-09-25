#include <iostream>
int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	const int l = 109;
	std::cin >> v >> t;
	std::cout << (l + v * t % l) % l << std::endl;
	return EXIT_SUCCESS;
}