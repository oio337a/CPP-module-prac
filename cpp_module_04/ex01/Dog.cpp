#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
  std::cout << "Dog copy constructor called" << std::endl;
  this->type = copy.type;
  this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &copy)
{
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &copy)
  {
    this->type = copy.type;
    delete this->_brain;
    this->_brain = new Brain(*copy._brain);
  }
  return (*this);
}

Dog::~Dog()
{
  delete this->_brain;
  std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Dog makeSound called" << std::endl;
}

std::string Dog::getType() const
{
  return (this->type);
}

Brain *Dog::getBrain() const
{
  return (this->_brain);
}