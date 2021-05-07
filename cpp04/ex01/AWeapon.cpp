#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
_name(name), _damage(damage), _apcost(apcost)
{

}

std::string const AWeapon::getName() const
{
	return(_name);
}

int AWeapon::getAPCost() const
{
	return(_apcost);
}

int AWeapon::getDamage() const
{
	return(_damage);
}

AWeapon & AWeapon::operator = (AWeapon const & src)
{
	_name = src._name;
	_damage = src._damage;
	_apcost = src._apcost;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}
