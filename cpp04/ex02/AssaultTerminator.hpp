#ifndef ASSAULT_TERMINATOR_HPP
#define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & src);
	AssaultTerminator & operator = (AssaultTerminator const & src);
	~AssaultTerminator();

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};


#endif