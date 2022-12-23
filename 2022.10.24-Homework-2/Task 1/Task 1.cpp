#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	switch (n / 100)
	{
	case 1: std::cout << "Sto "; break;
	case 2: std::cout << "Dvesti "; break;
	case 3: std::cout << "Trista "; break;
	case 4: std::cout << "Chetiresta "; break;
	case 5: std::cout << "Pyat'sot "; break;
	case 6: std::cout << "Shest'sot "; break;
	case 7: std::cout << "Sem'sot "; break;
	case 8: std::cout << "Vosem'sot "; break;
	case 9: std::cout << "Devyat'sot "; break;
	}
	switch ((n % 100) / 10)
	{
	case 2: std::cout << "dvadtsat' "; break;
	case 3: std::cout << "tridtsat' "; break;
	case 4: std::cout << "sorok "; break;
	case 5: std::cout << "pyat'desyat "; break;
	case 6: std::cout << "shest'desyat "; break;
	case 7: std::cout << "sem'desyat "; break;
	case 8: std::cout << "vosem'desyat "; break;
	case 9: std::cout << "devyanosto "; break;
	}
	if (n % 100 >= 10 && n % 100 < 20)
	{
		switch (n % 100) 
		{
		case 10: std::cout << "desyat'"; break;
		case 11: std::cout << "odinnadtsat' "; break;
		case 12: std::cout << "dvenadtsat' "; break;
		case 13: std::cout << "trinadtsat' "; break;
		case 14: std::cout << "chetirnadtsat' "; break;
		case 15: std::cout << "pyatnadtsat' "; break;
		case 16: std::cout << "shestnadtsat' "; break;
		case 17: std::cout << "semnadtsat' "; break;
		case 18: std::cout << "vosemnadtsat' "; break;
		case 19: std::cout << "devyatnadtsat' "; break;
		}
	}
	else 
	{
		switch (n % 10)
		{
		case 1: std::cout << "odin "; break;
		case 2: std::cout << "dva "; break;
		case 3: std::cout << "tri "; break;
		case 4: std::cout << "chetire "; break;
		case 5: std::cout << "pyat' "; break;
		case 6: std::cout << "shest' "; break;
		case 7: std::cout << "semi"; break;
		case 8: std::cout << "vosem' "; break;
		case 9: std::cout << "devyat' "; break;
		}

	}
	if (n == 0) 
	{
		std::cout << "nol' bananov";
	}
	if (n == 1) 
	{
		std::cout << "banan";
	}
	if (n >= 2 && n <= 4) 
	{
		std::cout << "banana";
	}
	if (n >= 5 && n <= 10) 
	{
		std::cout << "bananov";
	}
	if (n >= 11 && n <= 20) 
	{
		std::cout << " bananov";
	}
	if (((n % 10) == 2 || (n % 10) == 3 || (n % 10) == 4) && (n >= 20))
	{
		std::cout << "banana";
	}
	if (((n % 10) == 5 || (n % 10) == 6 || (n % 10) == 7 || (n % 10) == 8 || (n % 10) == 9 || (n % 10) == 0 || n % 10 == 1) && (n >= 20))
	{
		std::cout << "bananov";
	}
	return EXIT_SUCCESS;
}
