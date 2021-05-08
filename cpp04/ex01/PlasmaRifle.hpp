#ifndef PLASMA_RIFLE_HPP
#define PLASMA_RIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:


public:
	PlasmaRifle();
	~PlasmaRifle();

	void attack() const;
};

#endif
