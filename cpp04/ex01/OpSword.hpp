#ifndef OP_SWORD_HPP
#define OP_SWORD_HPP

#include <iostream>
#include "AWeapon.hpp"

class OpSword : public AWeapon
{
private:


public:
	OpSword();
	~OpSword();

	void attack() const;
};

#endif
