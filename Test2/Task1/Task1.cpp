#include <iostream>
bool f(int n, int d)
{
	if (d * d > n)
	{
		return true;
	}
	if (n % d == 0)
	{
		return f(n, d++);
	}
	else
	{
		return false;
	}
	
}
int main(int argc, char* argv[])
{
	int n = 0;
	int d = 2;
	std::cin >> n;
	if (f(n, d))
	{
		std::cout << "prime";
	}
	else
	{
		std::cout << "comp";
	}
	return EXIT_SUCCESS;
}
