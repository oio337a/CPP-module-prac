#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
  private:
    std::string _type;
  public:
    Cure();
    Cure(const Cure &copy);
    Cure &operator=(const Cure &copy);
    std::string const &getType() const;
    ~Cure();

    AMateria *clone() const;
    void use(ICharacter &target);
};