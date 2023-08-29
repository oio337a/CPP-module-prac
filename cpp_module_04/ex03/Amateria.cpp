#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
  std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
  std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
  std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
  std::cout << "AMateria assignation operator called" << std::endl;
  if (this != &copy)
    this->_type = copy._type;
  return (*this);
}

AMateria::~AMateria()
{
  std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{ 
  return (this->_type);
}

void AMateria::use(ICharacter &target)
{
  target.getName();
  // std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}