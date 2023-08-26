#pragma once
#include <iostream>

class Animal
{
protected:
  std::string type;
public:
  Animal();
  Animal(std::string type);
  Animal(const Animal &copy);
  Animal &operator=(const Animal &copy);
  virtual ~Animal();
  virtual std::string getType() const;
  virtual void makeSound() const = 0;
};