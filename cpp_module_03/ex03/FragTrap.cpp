#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "default";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap default construct called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap " << name << " construct called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ob)
{
	this->name = ob.name;
	this->hitPoint = ob.hitPoint;
	this->energyPoint = ob.energyPoint;
	this->attackDamage = ob.attackDamage;

	std::cout << "FragTrap " << this->name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ob)
{
	if (this != &ob)
	{
		this->name = ob.name;
		this->hitPoint = ob.hitPoint;
		this->energyPoint = ob.energyPoint;
		this->attackDamage = ob.attackDamage;
	}
	std::cout << "FragTrap " << this->name << " assignation constructor called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (!this->hitPoint || !this->energyPoint)
		std::cout << "FragTrap " << this->name << " can't do anything..." << std::endl;
	else
	{
		std:: cout << "FragTrap " << this->name << " Do high five!!" << std::endl;
		this->energyPoint--;
	}
}
