#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
  this->_name = "FragTrap";
  this->_HP = 100;
  this->_EP = 100;
  this->_AD = 30;
  std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
  this->_name = fragtrap._name;
  this->_HP = fragtrap._HP;
  this->_AD = fragtrap._AD;
  this->_EP = fragtrap._EP;
  std::cout << "FragTrap copied " << fragtrap._name << " constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
  this->_name = name;
  this->_HP = 100;
  this->_EP = 100;
  this->_AD = 30;
  std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
  std::cout << "FragTrap " << this->_name << " destructor is called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
  if (&fragtrap != this)
  {
    this->_name = fragtrap._name;
    this->_HP = fragtrap._HP;
    this->_AD = fragtrap._AD;
    this->_EP = fragtrap._EP;
    std::cout << "FragTrap " << fragtrap._name << " copied into " << this->_name << std::endl;
  }
  return (*this);
}

void FragTrap::highFivesGuys(void)
{
  if (!this->_HP)
  {
    std::cout << "FragTrap " << this->_name << " cannot ask for high fives, he is dead!" << std::endl;
    return;
  }
  else
  {
    std::cout << "FragTrap " << this->_name << " asks for high fives!" << std::endl;
  }
}