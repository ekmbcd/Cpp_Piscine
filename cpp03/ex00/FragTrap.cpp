#include "FragTrap.hpp"

FragTrap::FragTrap() :
_hp(100), _max_hp(100), _energy(100), _max_energy(100), _level(1), _melee_dmg(30), _ranged_dmg(20), _armor(5), _name("Claptrap")
{
	srand(time(0));
	std::cout << _name << " will be your wise leader, and you - you shall be my fearless minion!" << std::endl;
}

FragTrap::FragTrap(std::string name) :
_hp(100), _max_hp(100), _energy(100), _max_energy(100), _level(1), _melee_dmg(30), _ranged_dmg(20), _armor(5), _name(name)
{
	srand(time(0));
	std::cout << _name << " will be your wise leader, and you - you shall be my fearless minion!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "STAIRS?! NOOOOOOOOOOOOOOOO!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap & FragTrap::operator = (FragTrap const & src)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_dmg << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " hits " << target << " with his metal hands, causing " << _melee_dmg << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount = (int)amount < _armor ? 0 : amount - _armor;
	amount = (int)amount < _hp ? amount : _hp;
	std::cout << _name << " takes " << amount << " damage!" << std::endl;
	_hp -= amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount < _max_hp - _hp ? amount : _max_hp - _hp;
	std::cout << _name << " heals " << amount << " damage!" << std::endl;
	_hp += amount;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = {
		" fires the cannons of his ship at " + target,
		" uses his disco ball to shoot lasers at " + target,
		" explodes a large bomb, damaging " + target,
		" summons a Punkbot, which engages " + target,
		" jumps in the air and lands on top of " + target
	};

	if (_energy >= 25)
	{
		_energy -= 25;
		std::cout << _name << attacks[rand() % 5] << "!" << std::endl;
	}
	else
	{
		std::cout << _name << " is out of energy!" << std::endl;
	}

}