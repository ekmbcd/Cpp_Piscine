#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure & src)
{
	*this = src;
}

Cure::~Cure()
{

}

Cure & Cure::operator=(const Cure & src)
{
	_xp = src._xp;
	return(*this);
}

AMateria* Cure::clone() const
{
	AMateria * clone = new Cure;
	*clone = *this;
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	increaseXP();
}