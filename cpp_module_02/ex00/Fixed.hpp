#pragma once

#include <iostream>

class Fixed
{
private:
  int _fixed_point_value;
  static const int _fractional_bits = 8;

public:
  Fixed();
  ~Fixed();
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  int getRawBits(void) const;
  void setRawBits(int const raw);
};
