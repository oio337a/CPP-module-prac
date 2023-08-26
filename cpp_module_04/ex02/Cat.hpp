#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
  private:
    std::string _type;
    Brain *_brain;
  public:
    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    ~Cat();

    void makeSound() const;
    std::string getType() const;
    Brain *getBrain() const;
};