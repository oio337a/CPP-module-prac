#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
  std::cout << "Cat copy constructor called" << std::endl;
  this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
  std::cout << "Cat assignation operator called" << std::endl;
  if (this != &copy)
    this->type = copy.type;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Cat makeSound called" << std::endl;
}

std::string Cat::getType() const
{
  return (this->type);
}