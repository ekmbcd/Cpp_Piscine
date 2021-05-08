#include "Character.hpp"

Character::Character(std::string const & name) :
_name(name), _ap(40), _weapon(0)
{

}

std::string const Character::getName() const
{
	return(_name);
}

int Character::getAP() const
{
	return(_ap);
}

AWeapon* Character::getWeapon() const
{
	return(_weapon);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

Character & Character::operator = (Character const & src)
{
	_name = src._name;
	_ap = src._ap;
	_weapon = src._weapon;
	return (*this);
}

Character::Character(Character const & src)
{
	*this = src;
}

void Character::equip(AWeapon* wp)
{
	_weapon = wp;
}

void Character::attack(Enemy* enm)
{
	if (!getWeapon())
		return ;
	if (_ap < _weapon->getAPCost())
	{
		std::cout << _name << " does not have enough AP to attack!" << std::endl;
		return ;
	}
	std::cout <<  _name << " attacks " << enm->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	_ap -= _weapon->getAPCost();
	enm->takeDamage(_weapon->getDamage());
	if (enm->getHP() == 0)
		enm->~Enemy();
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	o << rhs.getName() << " has " << rhs.getAP() << " AP and ";

	if (rhs.getWeapon())
		o << "wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << "is unarmed" << std::endl;
	return (o);
}

Character::~Character() { }