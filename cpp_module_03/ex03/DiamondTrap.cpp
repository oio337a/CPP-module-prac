#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name(ClapTrap::name)
{
	ClapTrap::name = _name + "_clap_name";
	this->attackDamage = 30;
	std::cout << "DiamondTrap default construct called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::name = name + "_clap_name";
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << name << " construct called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &ob) : ClapTrap(ob), FragTrap(ob), ScavTrap(ob), _name(ob.name)
{
	std::cout << "DiamondTrap " << this->name << " copy construct called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &ob)
{
	if (this != &ob)
	{
		this->_name = ob.name;
		ClapTrap::name = ob.name + "_clap_name";
		this->hitPoint = ob.hitPoint;
		this->energyPoint = ob.energyPoint;
		this->attackDamage = ob.attackDamage;
	}
	std::cout << "DiamondTrap " << this->_name << " assignation construct called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destruct called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "this ClapTrap name is " << ClapTrap::name << " and " \
		<< "this DiamondTrap name is " << this->_name << std::endl;
}

void DiamondTrap::printStatus(void)
{
	std::cout	<< "This DiamondTrap name is " << this->_name << "\n"
				<< "HitPoint is " << hitPoint << "\n"
				<< "EnergyPoint is " << energyPoint << "\n"
				<< "AttackDamage is " << attackDamage << "\n"
				<< "ClapTrap Name is " << ClapTrap::name << std::endl;
}