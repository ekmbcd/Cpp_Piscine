#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
_hp(100), _max_hp(100), _energy(50), _max_energy(50), _level(1), _melee_dmg(20), _ranged_dmg(15), _armor(3), _name("Scavtrap")
{
	srand(time(0));
	std::cout << _name << " is ready to defend your door!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
_hp(100), _max_hp(100), _energy(50), _max_energy(50), _level(1), _melee_dmg(20), _ranged_dmg(15), _armor(3), _name(name)
{
	srand(time(0));
	std::cout << _name << " is ready to defend your door!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "HOLD... THE DOOR...." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & src)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << _name << " attacks " << target << " with its gun, causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << _name << " hits " << target << " with its oversized axe, causing " << _melee_dmg << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount = (int)amount < _armor ? 0 : amount - _armor;
	amount = (int)amount < _hp ? amount : _hp;
	std::cout << _name << " takes " << amount << " damage!" << std::endl;
	_hp -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount < _max_hp - _hp ? amount : _max_hp - _hp;
	std::cout << _name << " heals " << amount << " damage!" << std::endl;
	_hp += amount;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string attacks[] = {
		" challenges " + target + " to a match of strip-poker!",
		" challenges " + target + " to hide and seek!",
		" challenges " + target + " to a hot-dog eating contest!",
		" challenges " + target + " to play Yuumi jungler!",
		" challenges " + target + " to guess his favourite color!"
	};

	std::cout << _name << attacks[rand() % 5] << "!" << std::endl;
}