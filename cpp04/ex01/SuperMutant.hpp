#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant();
	virtual ~SuperMutant();

	void takeDamage(int);
};

#endif
