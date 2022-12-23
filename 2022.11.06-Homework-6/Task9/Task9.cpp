#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short curr = 0;
	short pr = 0;
	short ind_n = 0;
	short ind = 0;
	short summ = 0;
	short a[1000]{ 0 };
	curr = 1;
	std::cin >> n;
	for (short i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	pr = a[0];
	while (ind != n - 1)
	{
		for (short i = ind + 1; i < n; ++i)
		{
			if (a[i] > pr)
			{
				pr = a[i];
				ind_n = i;
			}
		}
		curr += ind_n - ind;
		summ += curr * pr;
		ind = ind_n;
		pr = 0;
		curr = 0;
	}
	std::cout << summ;
	return EXIT_SUCCESS;
}


