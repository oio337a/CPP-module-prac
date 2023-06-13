#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		void add_contact();
		void search_contact();
		bool validate(std::string str);
		std::string user_input(std::string message);
};
