#include "Harl.hpp"

Harl::Harl()
{
  std::cout << "default constructor called" << std::endl;
}

Harl::~Harl()
{
  std::cout << "default destructor called" << std::endl;
}

void Harl::debug(void)
{
  std::cout << "debug" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
  std::cout << "info" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "warning" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
  std::cout << "error" << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int level_index = -1;
  for (int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
    {
      level_index = i;
      break;
    }
  }
  switch (level_index)
  {
  case 0:
    this->debug();
    break;
  case 1:
    this->info();
    break;
  case 2:
    this->warning();
    break;
  case 3:
    this->error();
    break;
  default:
    break;
  }
}
