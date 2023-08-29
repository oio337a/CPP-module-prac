#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
  std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
  std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
  std::cout << "Cure assignation operator called" << std::endl;
  if (this != &copy)
    AMateria::operator=(copy);
  return (*this);
}

Cure::~Cure()
{
  std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
  return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
  std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}