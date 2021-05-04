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

	bool	operator > (Fixed const & rhs) const;
	bool	operator >=(Fixed const & rhs) const;
	bool	operator < (Fixed const & rhs) const;
	bool	operator <=(Fixed const & rhs) const;
	bool	operator ==(Fixed const & rhs) const;
	bool	operator !=(Fixed const & rhs) const;

	Fixed	operator + (Fixed const & rhs) const;
	Fixed	operator - (Fixed const & rhs) const;
	Fixed	operator * (Fixed const & rhs) const;
	Fixed	operator / (Fixed const & rhs) const;

	Fixed&	operator ++(void);
	Fixed	operator ++(int);
	Fixed&	operator --(void);
	Fixed	operator --(int);

	static Fixed&		min(Fixed &left, Fixed &right);
	static Fixed&		max(Fixed &left, Fixed &right);
	static const Fixed&	min(const Fixed &left, const Fixed &right);
	static const Fixed&	max(const Fixed &left, const Fixed &right);

private:
	int _value;
	static const int _point;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif 
