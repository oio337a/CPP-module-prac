#pragma once
#include "Animal.hpp"

class Cat: public Animal {
  private:
    std::string _type;
  public:
    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    ~Cat();

    void makeSound() const;
    std::string getType() const;
};