#include "Victim.hpp"

Victim::Victim(std::string const & name) :
_name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim()
{

}

Victim & Victim::operator = (Victim const & src)
{
	_name = src._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

std::string const Victim::getName() const
{
	return(_name);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I am " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}

void Victim::getPolymorphed() const
{
	std::cout << _name <<  " has been turned into a cute little sheep!" << std::endl;
}
