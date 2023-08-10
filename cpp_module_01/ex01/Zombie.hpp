#pragma once
#include <iostream>
#include <sstream>

class Zombie
{
private:
  std::string name;

public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void announce(void);
  void set_name(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
