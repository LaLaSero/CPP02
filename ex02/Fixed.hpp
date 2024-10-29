#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(int const n);
	Fixed(float const f);
	~Fixed();

	Fixed &operator=(const Fixed &fixed);

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed)const;
	Fixed operator*(const Fixed &fixed)const;
	Fixed operator/(const Fixed &fixed)const;

	bool operator>(const Fixed &fixed)const;
	bool operator<(const Fixed &fixed)const;
	bool operator>=(const Fixed &fixed)const;
	bool operator<=(const Fixed &fixed)const;
	bool operator==(const Fixed &fixed)const;
	bool operator!=(const Fixed &fixed)const;
	Fixed &operator++();
	Fixed operator++(int);

	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);


	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _value;
	static const int _bits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif