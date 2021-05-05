#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	_hp = 100;
	_max_hp = 100;
	_energy = 120;
	_max_energy = 120;
	_level = 1;
	_melee_dmg = 60;
	_ranged_dmg = 20;
	_armor = 5;
	_name = "Supertrap";
	srand(time(0));
	std::cout << _name << " IS PERFECTION." << std::endl;
}

SuperTrap::SuperTrap(std::string name) 
{
	_hp = 100;
	_max_hp = 100;
	_energy = 120;
	_max_energy = 120;
	_level = 1;
	_melee_dmg = 60;
	_ranged_dmg = 20;
	_armor = 5;
	_name = name;
	srand(time(0));
	std::cout << _name << " IS PERFECTION." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "This must be a mistake." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
}

SuperTrap & SuperTrap::operator = (SuperTrap const & src)
{
	_hp = src._hp;
	_max_hp = src._max_hp;
	_energy = src._energy;
	_max_energy = src._max_energy;
	_level = src._level;
	_melee_dmg = src._melee_dmg;
	_ranged_dmg = src._ranged_dmg;
	_armor = src._armor;
	_name = src._name;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	this->FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	this->NinjaTrap::meleeAttack(target);
}
