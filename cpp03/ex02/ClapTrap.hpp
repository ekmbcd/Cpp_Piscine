#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <random>

class ClapTrap
{
protected:
	int			_hp;
	int			_max_hp;
	int			_energy;
	int			_max_energy;
	int			_level;
	int			_melee_dmg;
	int			_ranged_dmg;
	int			_armor;
	std::string	_name;

public:
	/* Canonical Functions */
	ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap(std::string name);
	ClapTrap & operator = (ClapTrap const & src);
	~ClapTrap();

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif