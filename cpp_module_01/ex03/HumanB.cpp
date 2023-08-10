#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
  std::cout << this->name << " 이 생성되었어요. " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
  this->weapon = &weapon;
}

void HumanB::attack() const // const 를 붙여줘야 함 (const 함수 안에서는 멤버 변수를 변경할 수 없음)
{
  std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}