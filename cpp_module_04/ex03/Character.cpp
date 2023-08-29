#include "Character.hpp"

Character::Character() : _name("default")
{
  std::cout << "Character default constructor called" << std::endl;
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
  std::cout << "Character name constructor called" << std::endl;
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
  for (int i = 0; i < 4; i++) {
    if (copy._inventory[i])
      this->_inventory[i] = copy._inventory[i]->clone();
    else
      this->_inventory[i] = NULL;
  }
}

Character::~Character()
{
  for (int i = 0; i < 4; i++) {
    if (this->_inventory[i])
      delete this->_inventory[i];
  }
}

Character &Character::operator=(Character const &copy) {
  if (this != &copy) {
    for (int i = 0; i < 4; i++) {
      if (this->_inventory[i])
        delete this->_inventory[i];
      if (copy._inventory[i])
        this->_inventory[i] = copy._inventory[i]->clone();
      else
        this->_inventory[i] = NULL;
    }
  }
  return (*this);
}

std::string const &Character::getName() const
{
  return (this->_name);
}

void Character::equip(AMateria *m)
{
  if (!m)
    return ;
  for (int i = 0; i < 4; i++) {
    if (!this->_inventory[i]) {
      this->_inventory[i] = m;
      break;
    }
  }
}

void Character::unequip(int idx)
{
  if (idx < 0 || idx > 3 || !this->_inventory[idx])
    return ;
  this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
  if (idx < 0 || idx > 3 || !this->_inventory[idx])
    return ;
  this->_inventory[idx]->use(target);
}
