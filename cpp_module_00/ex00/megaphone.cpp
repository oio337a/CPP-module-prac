#include <iostream>

int	main(int ac, char *av[])
{
	std::string	str;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_FAILURE);
	}
	for (int i = 1; i < ac; i++) {
		str = av[i];
		for (std::string::iterator it = str.begin(); it != str.end(); it++) {
			std::islower(*it) ? std::cout << static_cast<char>(std::toupper(*it)) : std::cout << *it;
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}