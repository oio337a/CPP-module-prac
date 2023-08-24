#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
  FragTrap(void);
  FragTrap(const FragTrap &fragtrap);
  FragTrap &operator=(const FragTrap &fragtrap);
  FragTrap(std::string name);
  ~FragTrap();

  void highFivesGuys(void);
};
