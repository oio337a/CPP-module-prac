#include "Zombie.hpp"

int main(void)
{
	Zombie* manyZombie;

	manyZombie = zombieHorde(3, "dummy");

	for (int i = 0; i < 3; i++)
	{
		manyZombie[i].announce();
	}

	delete[] manyZombie;
}