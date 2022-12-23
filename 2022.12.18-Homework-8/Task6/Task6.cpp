#include <iostream>
#include <string>

int md(std::string str)
{
	if (str.length() == 1)
	{
		return (int)str[0] - '0';
	}
	int t = md(str.substr(1));
	return ((int)str[0] - '0' > t ? (int)str[0] - '0' : t);
}

int main(int argc, char* argv[])
{
	std::string str = "";
	std::cin >> str;
	std::cout << md(str);
	return EXIT_SUCCESS;
}
