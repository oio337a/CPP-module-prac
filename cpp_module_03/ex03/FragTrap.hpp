#pragma once
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public	:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(FragTrap const &ob);
			FragTrap& operator=(FragTrap const &ob);
			~FragTrap();
			void	highFivesGuys();
};