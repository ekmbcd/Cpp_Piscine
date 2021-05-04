#include "Fixed.hpp"

int const Fixed::_point = 8;

Fixed::Fixed() 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

Fixed::Fixed(int const n) : _value(n << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _point));
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _point));
}

int		Fixed::toInt() const
{
	return (_value >> _point);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}