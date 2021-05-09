#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : 
 _xp(0), _type(type)
{

}

AMateria & AMateria::operator = (AMateria const & src)
{
	_type = src._type;
	_xp = src._xp;
	return (*this);
}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

std::string const & AMateria::getType() const
{
	return(_type);
}

unsigned int AMateria::getXP() const
{
	return(_xp);
}

void AMateria::increaseXP()
{
	_xp += 10;
}