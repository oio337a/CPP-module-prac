#include "Phonebook.hpp"

int main(void)
{
	std::string	str;
	Phonebook phonebook;
	int i = 0;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, str);
		if (str == "EXIT")
			break ;
		else if (str == "ADD")
		{
			std::cout << std::setw(25) << std::right << "ADD" << std::endl;
			i %= 8;
			phonebook.add_contact(i);
			i++;
		}
		else if (str == "SEARCH")
		{
			std::cout << std::setw(25) << std::right << "SEARCH" << std::endl;
			phonebook.search_contact();
		}
		else
		{
			std::cout << std::setw(30) << std::right << "Invalid command" << std::endl;
		}
	}
	return 0;
}
