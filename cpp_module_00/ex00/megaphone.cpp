#include <iostream>

int main(int ac, char *av[])
{
	std::string	str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (int j = 0; j < static_cast<int>(str.length()); j++)
			{
				std::cout << static_cast<char>(toupper(str[j]));
			}
		}
	}
	std::cout << std::endl;
	return 0;
}