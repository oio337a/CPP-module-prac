#pragma once
#include <iostream>

class ClapTrap{
	protected	:
			std::string name;
			unsigned int hitPoint;
			unsigned int energyPoint;
			unsigned int attackDamage;
	public	:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &ob);
			~ClapTrap();
			ClapTrap& operator=(const ClapTrap &ob); 
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};