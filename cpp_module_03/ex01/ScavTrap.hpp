#pragma once
#include "ClapTrap.hpp";

class ScavTrap : ClapTrap 
{
private:
public:
  ScavTrap(void);
  ScavTrap(const ScavTrap &scavtrap);
  ScavTrap &operator=(const ScavTrap &scavtrap);

  ~ScavTrap();

  void guardGate();
}
