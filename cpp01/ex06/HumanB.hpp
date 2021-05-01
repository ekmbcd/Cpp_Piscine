#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{

private:
	std::string	_name;
	Weapon*		_weapon;
	// storing weapon as a pointer because it is
	// not initialized during declaration
	
public:
	HumanB(std::string name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon& weapon);

};

#endif
