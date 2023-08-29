#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
  private:
    std::string _type;
  public:
    Ice();
    Ice(const Ice &copy);
    Ice &operator=(const Ice &copy);
    std::string const &getType() const;
    ~Ice();

    AMateria *clone() const;
    void use(ICharacter &target);
};