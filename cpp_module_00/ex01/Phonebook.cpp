#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

static bool validate(std::string str)
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

static std::string user_input(std::string message)
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

void Phonebook::add_contact(int i)
{
	this->contacts[i].set_first_name(user_input("first name: "));
	this->contacts[i].set_last_name(user_input("last name: "));
	this->contacts[i].set_nickname(user_input("nickname: "));
	this->contacts[i].set_phone_number(user_input("phone number: "));
	this->contacts[i].set_darkest_secret(user_input("darkest secret: "));
}

static void print_text(std::string message)
{
	if (message.length() > 10)
	{
		std::cout << std::right << std::setw(9) << message.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << message;
}

void Phonebook::search_contact()
{
	std::stringstream ss;

	std::cout << "|";
	std::cout << std::setw(10) << std::right << "index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "nickname";
	std::cout << "|";
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!this->contacts[i].get_first_name().empty())
		{
			ss << i + 1;
			std::string temp;
			ss >> temp;
			std::cout << "|";
			print_text(temp);
			ss.clear();
			std::cout << "|";
			print_text(this->contacts[i].get_first_name());
			std::cout << "|";
			print_text(this->contacts[i].get_last_name());
			std::cout << "|";
			print_text(this->contacts[i].get_nickname());
			std::cout << "|";
			std::cout << std::endl;
		}
	}
	std::string str;
	int index;
	while (1)
	{
		std::cout << "탐색할 인덱스를 선택하세요: ";
		std::getline(std::cin, str);
		ss << str;
		ss >> index;
		ss.clear();
		if (index > 0 && index < 9)
			break;
	}
	std::cout << "first name: " << this->contacts[index - 1].get_first_name() << std::endl;
	std::cout << "last name: " << this->contacts[index - 1].get_last_name() << std::endl;
	std::cout << "nickname: " << this->contacts[index - 1].get_nickname() << std::endl;
	std::cout << "phone number: " << this->contacts[index - 1].get_phone_number() << std::endl;
	std::cout << "darkest secret: " << this->contacts[index - 1].get_darkest_secret() << std::endl;
}