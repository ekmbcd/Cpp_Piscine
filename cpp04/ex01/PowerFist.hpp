#ifndef POWER_FIST_HPP
#define POWER_FIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:


public:
	PowerFist();
	~PowerFist();

	void attack() const;
};

#endif
