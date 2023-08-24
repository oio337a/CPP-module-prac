#include "ScavTrap.hpp"

/**
 * ! SCAVTRAP
 * Orthodox Canonical Form
 */

ScavTrap::ScavTrap()
{
  std::cout << "ScavTrap Default constructor called" << std::endl;
  this->_name = "ScavTrap";
  this->_HP = 100;
  this->_EP = 50;
  this->_AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
  std::cout << "ScavTrap copied " << scavtrap._name << " constructor called!" << std::endl;
  this->_name = scavtrap._name;
  this->_HP = scavtrap._HP;
  this->_AD = scavtrap._AD;
  this->_EP = scavtrap._EP;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
  if (&scavtrap != this)
  {
    std::cout << "ScavTrap " << scavtrap._name << " copied into " << this->_name << std::endl;
    this->_name = scavtrap._name;
    this->_HP = scavtrap._HP;
    this->_AD = scavtrap._AD;
    this->_EP = scavtrap._EP;
  }
  return (*this);
}

/**
 * ! SCAVTRAP
 * Constructor & Destructor
 */

ScavTrap::ScavTrap(std::string name)
{
  this->_name = name;
  this->_HP = 100;
  this->_EP = 50;
  this->_AD = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructor is called" << std::endl;
}

/**
 * ! SCAVTRAP
 * Public functions
 */

void ScavTrap::guardGate(void)
{
  if (!this->_HP || !this->_EP)
  {
    std::cout << "ScavTrap " << this->_name << " point is empty" << std::endl;
    return ;
  }
  else
  {
		std::cout<< "ScavTrap " << this->_name << " guardgate is called" << std::endl;
    this->_EP--;
  }
}

void ScavTrap::attack(const std::string &target)
{
  if (this->_HP <= 0)
  {
    std::cout << this->_name << " cannot attack, he has 0 HP left!" << std::endl;
  }
  else
  {
    for (int i = 0; i < (int)this->_AD; i++)
    {
      if (this->_EP <= 0)
      {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_AD << " points of damage! But he has no EP left!" << std::endl;
        return;
      }
      this->_EP--;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_AD << " points of damage!" << std::endl;
  }
}
