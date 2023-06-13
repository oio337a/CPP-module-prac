#include <string>
#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

bool Phonebook::validate(std::string str)
{
	if (!str.length())
		return 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isalnum(str[i]))
			return 0;
	}
	return 1;
}

std::string Phonebook::user_input(std::string message)
{
	std::string str;

	std::cout << message;
	std::getline(std::cin, str);
	while (!validate(str))
	{
		std::cout << "!!! invalid !!!" << std::endl;
		std::cout << message;
		std::getline(std::cin, str);
	}
	return str;
}

void Phonebook::add_contact()
{
	Contact con;

	con.set_first_name(user_input("first name: "));
	con.set_last_name(user_input("last name: "));
	con.set_nickname(user_input("nickname: "));
	con.set_phone_number(user_input("phone number: "));
	con.set_darkest_secret(user_input("darkest secret: "));
}

void Phonebook::search_contact()
{
}