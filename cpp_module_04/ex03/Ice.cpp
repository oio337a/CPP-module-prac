#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice Desconstructor called" << std::endl;
}

Ice::Ice(Ice const &ob)
{
	// std::cout << "Ice Copy constructor called" << std::endl;
	*this = ob;
}

Ice &Ice::operator=(Ice const &ob)
{
	// std::cout << "Ice Assignation constructor called" << std::endl;
	this->type = ob.type;
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *p = new Ice();
	return p;
}