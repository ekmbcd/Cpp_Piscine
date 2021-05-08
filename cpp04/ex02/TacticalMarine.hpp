#ifndef TACTICAL_MARINE_HPP
#define TACTICAL_MARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & src);
	TacticalMarine & operator = (TacticalMarine const & src);
	~TacticalMarine();

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};


#endif