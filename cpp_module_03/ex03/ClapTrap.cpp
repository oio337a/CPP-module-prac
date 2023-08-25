#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "default";
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;

	std::cout << "ClapTrap " << name << " constructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &ob)
{
	this->name = ob.name;
	this->hitPoint = ob.hitPoint;
	this->energyPoint = ob.energyPoint;
	this->attackDamage = ob.attackDamage;

	std::cout << "ClapTrap " << this->name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ob)
{
	if (this != &ob)
	{
		this->name = ob.name;
		this->hitPoint = ob.hitPoint;
		this->energyPoint = ob.energyPoint;
		this->attackDamage = ob.attackDamage;
	}

	std::cout << "ClapTrap " << this->name << " assignation constructor called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
  if (this->hitPoint <= 0)
  {
    std::cout << this->name << " cannot attack, he has 0 HP left!" << std::endl;
  }
  else
  {
    for (int i = 0; i < (int)this->attackDamage; i++)
    {
      if (this->energyPoint <= 0)
      {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage! But he has no EP left!" << std::endl;
        return;
      }
      this->energyPoint--;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  for (int i = 0; i < (int)amount; i++)
  {
    if (this->hitPoint <= 0)
    {
      std::cout << "ClapTrap " << this->name << " has no more HP left before taking " << amount << " point of damage" << std::endl;
      return;
    }
    this->hitPoint--;
  }
  std::cout << "ClapTrap " << this->name << " takes " << amount << " point of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  for (int i = 0; i < (int)amount; i++)
  {
    if (this->energyPoint <= 0)
    {
      std::cout << "ClapTrap " << this->name << " repairs himself " << i << " point of damage! But he has no EP left!" << std::endl;
      return;
    }
    this->hitPoint++;
    this->energyPoint--;
  }
  std::cout << "ClapTrap " << this->name << " repairs himself " << amount << " point of damage!" << std::endl;
}
