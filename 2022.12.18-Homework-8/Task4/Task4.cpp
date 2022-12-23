#include <iostream>

void f(int count, int from, int to)
{
	if (count <= 0) return;
	int tmp = 6 - from - to;
	f(count - 1, from, tmp);
	std::cout << "Disk" << ' ' << count << ' ' << "move from" << ' ' << from << " " << "to" << " " << to << std::endl;
	f(count - 1, tmp, to);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	f(n, 1, 3);
	return EXIT_SUCCESS;
}
