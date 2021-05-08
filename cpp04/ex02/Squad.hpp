#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad
{
private:
	int 			_count;
	ISpaceMarine**	_units;
public:
	Squad();
	Squad(Squad const & src);
	Squad & operator = (Squad const & src);
	~Squad();

	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
};


#endif