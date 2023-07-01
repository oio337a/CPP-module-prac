#pragma once

#include <iostream>

class Fixed
{
private:
  int _fixed_point_value;
  static const int _fractional_bits = 8;

public:
  Fixed();
  Fixed(const int n);
  Fixed(const float n);
  ~Fixed();
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);