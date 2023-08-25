#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{
	public	:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &ob);
			ScavTrap& operator=(const ScavTrap &ob);
			~ScavTrap();
			void	attack(const std::string &target);
			void	guardGate();
};