#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title) :
_name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer()
{

}

Sorcerer & Sorcerer::operator = (Sorcerer const & src)
{
	_name = src._name;
	_title = src._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}

std::string const Sorcerer::getName() const
{
	return(_name);
}

std::string const Sorcerer::getTitle() const
{
	return(_title);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << " and I like ponies!" << std::endl;
	return (o);
}

void Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}
