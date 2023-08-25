#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private :
			std::string _name;
	public	:
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &ob);
			DiamondTrap& operator=(DiamondTrap const &ob);
			~DiamondTrap();
			void	whoAmI();
			void 	printStatus(void);
};