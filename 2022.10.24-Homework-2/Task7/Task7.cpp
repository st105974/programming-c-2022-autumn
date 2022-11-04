// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	std::cin >> n >> k >> m;
	if ((k < m * n) && ((k % n == 0) || (k % n == 0)))
	{
		std::cout << "YES";

	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}


