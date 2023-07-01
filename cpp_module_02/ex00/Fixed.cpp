#include "Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  this->_fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
  std::cout << "Copy assignation operator called" << std::endl;
  this->setRawBits(fixed.getRawBits());
  return *this;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
  this->_fixed_point_value = raw;
}
