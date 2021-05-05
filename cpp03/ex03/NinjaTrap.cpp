#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	_hp = 60;
	_max_hp = 60;
	_energy = 120;
	_max_energy = 120;
	_level = 1;
	_melee_dmg = 60;
	_ranged_dmg = 5;
	_armor = 0;
	_name = "Ninjatrap";
	srand(time(0));
	std::cout << _name << " appears from the shadows!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) 
{
	_hp = 60;
	_max_hp = 60;
	_energy = 120;
	_max_energy = 120;
	_level = 1;
	_melee_dmg = 60;
	_ranged_dmg = 5;
	_armor = 0;
	_name = name;
	srand(time(0));
	std::cout << _name << " appears from the shadows!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "At least i wasn't killed by a pirate..." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
}

NinjaTrap & NinjaTrap::operator = (NinjaTrap const & src)
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

void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << _name << " throws his shuriken at " << target.get_name() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << _name << " cuts " << target.get_name() << " with his katana" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << _name << " hits " << target.get_name() << " with an arrow from his bow" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << _name << " and " << target.get_name() << " stare at each other. Honor among ninjas." << std::endl;
}