#include "FragTrap.hpp"

int	main(void) {
	FragTrap a("A");
  FragTrap b("B");

  a.attack("B");
  b.takeDamage(20);
  b.beRepaired(10);
  b.attack("A");
  a.takeDamage(30);
  a.beRepaired(10);
  a.attack("B");
  b.takeDamage(30);
  b.beRepaired(10);
  b.attack("A");
  a.takeDamage(30);
  a.beRepaired(10);
  a.attack("B");
  b.takeDamage(30);
  a.highFivesGuys();
  return (0);
}