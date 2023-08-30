#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(Cure const &ob)
{
	// std::cout << "Cure Copy constructor called" << std::endl;
	*this = ob;
}

Cure &Cure::operator=(Cure const &ob)
{
	// std::cout << "Cure Assignation constructor called" << std::endl;
	if (this != &ob)
		this->type = ob.type;
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *p = new Cure();
	return p;
}