#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
  std::string _type;
  Brain *_brain;
public:
  Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &copy);
  ~Dog();

  void makeSound() const;
  std::string getType() const;
  Brain *getBrain() const;
};