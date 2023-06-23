#include "Zombie.hpp"

int main(void)
{
	Zombie a;
	Zombie* b;

//a
	a.set_name("A");
	a.announce();

// b
	b = newZombie("B");
	b->announce();
	delete b;

// c
	randomChump("c");
}