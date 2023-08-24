#include "DiamondTrap.hpp"

int	main(void) {
  DiamondTrap a("A");
  DiamondTrap b("B");

  a.whoAmI();
  b.whoAmI();
  a.attack("B");
  b.takeDamage(30);
  b.whoAmI();
  b.beRepaired(10);
  b.whoAmI();
  a.highFivesGuys();
  a.guardGate();
  return (0);
}