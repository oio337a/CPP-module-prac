#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << this->type << " 이 생성되었어요. " << std::endl;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
