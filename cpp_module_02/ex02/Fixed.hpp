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

  Fixed operator+(const Fixed &fixed) const;
  Fixed operator-(const Fixed &fixed) const;
  Fixed operator*(const Fixed &fixed) const;
  Fixed operator/(const Fixed &fixed) const;

  Fixed &operator++(void);
  const Fixed operator++(int);
  Fixed &operator--(void);
  const Fixed operator--(int);

  bool operator>(const Fixed &fixed) const;
  bool operator<(const Fixed &fixed) const;
  bool operator>=(const Fixed &fixed) const;
  bool operator<=(const Fixed &fixed) const;
  bool operator==(const Fixed &fixed) const;
  bool operator!=(const Fixed &fixed) const;

  static Fixed &min(Fixed &a, Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);