#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
  Zombie *manyZombie = new Zombie[N];

  for (int i = 0; i < N; i++)
  {
    std::stringstream ss1; // 변수 선언

    ss1 << i + 1;
    manyZombie[i].set_name(name + ss1.str());
  }
  return manyZombie;
}
