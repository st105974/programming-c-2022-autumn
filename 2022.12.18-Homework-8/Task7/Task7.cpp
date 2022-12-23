#include <iostream>
#include <string>

std::string fun(std::string str)
{
	if (str.length() == 1)
	{
		return str;
	}
	if (str.length() == 2)
	{
		return str.insert(1, "*");
	}
	std::string t = fun(str.substr(1));
	return std::string(1, str[0]) + "*" + t;
}

int main(int argc, char* argv[])
{
	std::string str = "";
	std::cin >> str;
	std::cout << fun(str);
	return EXIT_SUCCESS;
}