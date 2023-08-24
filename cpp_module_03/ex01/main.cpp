#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap a("A");
	ScavTrap b("B");

	a.attack("B");
	b.takeDamage(999);
	b.beRepaired(3);
	b.attack("A");
	a.takeDamage(10);
	a.beRepaired(10);
	b.takeDamage(2);
	a.guardGate();
}