#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		void add_contact(int i);
		void search_contact();
};
