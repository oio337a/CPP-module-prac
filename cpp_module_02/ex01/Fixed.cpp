#include "Fixed.hpp"
#include <cmath>

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

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
  out << fixed.toFloat();
  return out;
}

Fixed::Fixed(const int n)
{
  std::cout << "Int constructor called" << std::endl;
  this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float n)
{
  std::cout << "Float constructor called" << std::endl;
  this->_fixed_point_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
  return this->_fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
  this->_fixed_point_value = raw;
}

int Fixed::toInt(void) const
{
  return this->_fixed_point_value >> this->_fractional_bits;
}

float Fixed::toFloat(void) const
{
  return static_cast<float>(this->_fixed_point_value) / static_cast<float>(1 << this->_fractional_bits);
}