#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
public:

	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & src);
	Sorcerer & operator = (Sorcerer const & src);
	~Sorcerer();

	std::string const getName() const;
	std::string const getTitle() const;
	void polymorph(Victim const & vic) const;

private:
	Sorcerer();
	std::string	_name;
	std::string	_title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
