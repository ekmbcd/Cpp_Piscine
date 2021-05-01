#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{

private:
	std::string	_name;
	Weapon&		_weapon;
	// storing weapon as a reference because it is
	// initialized during declaration
	
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack() const;

};

#endif
