#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
public:
  ScavTrap(void);
  ScavTrap(const ScavTrap &scavtrap);
  ScavTrap &operator=(const ScavTrap &scavtrap);
  ScavTrap(std::string name);
  ~ScavTrap();

  void guardGate();
  void attack(const std::string &target);
};
