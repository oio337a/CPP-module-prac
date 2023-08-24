#include "ScavTrap.hpp"

/**
 * ! SCAVTRAP
 * Orthodox Canonical Form
 */

ScavTrap::ScavTrap() : _name("ScavTrap"), _HP(100), _EP(50), _AD(20)
{
  std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : _name(scavtrap._name), _HP(scavtrap._HP), _EP(scavtrap._EP), _AD(scavtrap._AD)
{
  std::cout << "ScavTrap copied " << scavtrap._name << " constructor called!" << std::endl;
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

ScavTrap::ScavTrap(std::string name) : _name(name), _HP(100), _EP(50), _AD(20)
{
	std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " destructor is called" << std::endl;
}

/**
 * ! SCAVTRAP
 * Public functions
 */

void ScavTrap::guardGate(void)
{
  if (!this->_HP || !this->_EP) {
    std::cout << "ScavTrap " << this->_name << " point is empty" << std::endl;
    return ;
  }
  else {
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_AD << " points of damage" << std::endl;
    this->_EP--;
  }
}