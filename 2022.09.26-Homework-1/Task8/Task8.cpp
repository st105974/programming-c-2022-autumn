#include <iostream>

int main(int argc, char* argv[])
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int b1 = 0;
	int b2 = 0;
	int b3 = 0;
	int time1 = 0;
	int time2 = 0;
	int range = 0;
	std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	time1 = a1 * 3600 + a2 * 60 + a3;
	time2 = b1 * 3600 + b2 * 60 + b3;
	range = time2 - time1;
	std::cout << range << std::endl;
	return EXIT_SUCCESS;
}