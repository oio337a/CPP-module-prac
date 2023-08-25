#pragma once
#include <iostream>

class WrongAnimal
{
protected:
  std::string type;
public:
  WrongAnimal();
  WrongAnimal(std::string type);
  WrongAnimal(const WrongAnimal &copy);
  WrongAnimal &operator=(const WrongAnimal &copy);
  virtual ~WrongAnimal();

  virtual void makeSound() const;
  std::string getType() const;
};