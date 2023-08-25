#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
private:
  std::string _type;
public:
  Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &copy);
  ~Dog();

  void makeSound() const;
  std::string getType() const;
};