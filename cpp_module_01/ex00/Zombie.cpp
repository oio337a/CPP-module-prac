#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;
  std::cout << this->name << "	생성되었어요." << std::endl;
}

Zombie::~Zombie()
{
  std::cout << this->name << "	죽었어요." << std::endl;
}

void Zombie::announce(void)
{
  std::cout << this->name << "	BraiiiiiiinnnzzzZ..." << std::endl;
}
