#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
	std::string	str;
	Phonebook phonebook;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, str);
		if (str == "EXIT" || str == "exit")
			break ;
		else if (str == "ADD" || str == "add")
		{
			std::cout << "             ADD" << std::endl;
			std::cout << "=============================" << std::endl;
			phonebook.add_contact();
		}
		else if (str == "SEARCH" || str == "search")
		{
			std::cout << "            SEARCH" << std::endl;
			std::cout << "=============================" << std::endl;
			phonebook.search_contact();
		}
		else
		{
			std::cout << "       Invalid command" << std::endl;
			std::cout << "=============================" << std::endl;
		}
	}
	return 0;
}
