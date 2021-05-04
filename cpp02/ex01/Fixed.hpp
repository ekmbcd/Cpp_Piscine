#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:
	Fixed();
	Fixed(Fixed const & src);
	Fixed(int const n);
	Fixed(float const f);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

private:
	int _value;
	static const int _point;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif 
