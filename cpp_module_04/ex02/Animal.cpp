#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
  std::cout << "Animal constructor called " << this->type << std::endl;
}

Animal::Animal(const Animal &copy)
{
  std::cout << "Animal copy constructor called" << std::endl;
  this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &copy)
    this->type = copy.type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
  return (this->type);
}

// void Animal::makeSound() const
// {
//   std::cout << "Animal makeSound called" << std::endl;
// }
