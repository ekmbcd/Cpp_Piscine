#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Beautiful and functional!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Beautiful and functional!" << std::endl;
}

ClapTrap::~ClapTrap()
{
		std::cout << "Claptrap... out!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = (int)amount < _armor ? 0 : amount - _armor;
	amount = (int)amount < _hp ? amount : _hp;
	std::cout << _name << " takes " << amount << " damage!" << std::endl;
	_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount < _max_hp - _hp ? amount : _max_hp - _hp;
	std::cout << _name << " heals " << amount << " damage!" << std::endl;
	_hp += amount;
}