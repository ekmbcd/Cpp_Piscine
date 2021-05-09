#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice & src)
{
	*this = src;
}

Ice::~Ice()
{

}

Ice & Ice::operator=(const Ice & src)
{
	_xp = src._xp;
	return(*this);
}

AMateria* Ice::clone() const
{
	AMateria * clone = new Ice;
	*clone = *this;
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	increaseXP();
}