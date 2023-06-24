#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << this->name << " 이 생성되었어요. " << std::endl;
	this->weapon = 0;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}