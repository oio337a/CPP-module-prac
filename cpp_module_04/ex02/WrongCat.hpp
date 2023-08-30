#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
  private:
    std::string _type;
  public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &copy);
    ~WrongCat();

    void makeSound() const;
    std::string getType() const;
};