#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
  for (int i = 0; i < 4; i++) {
    if (copy._inventory[i])
      _inventory[i] = copy._inventory[i]->clone();
    else
      _inventory[i] = NULL;
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
  if (this != &copy) {
    for (int i = 0; i < 4; i++) {
      if (_inventory[i])
        delete _inventory[i];
      if (copy._inventory[i])
        _inventory[i] = copy._inventory[i]->clone();
      else
        _inventory[i] = NULL;
    }
  }
  return (*this);
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++) {
    if (_inventory[i])
      delete _inventory[i];
  }
}

void MateriaSource::learnMateria(AMateria *m) {
  if (!m)
    return ;
  for (int i = 0; i < 4; i++) {
    if (!_inventory[i]) {
      _inventory[i] = m;
      return ;
    }
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  for (int i = 0; i < 4; i++) {
    if (_inventory[i] && _inventory[i]->getType() == type)
      return (_inventory[i]->clone());
  }
  return (NULL);
}