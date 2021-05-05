#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <random>

class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap(std::string name);
	ScavTrap & operator = (ScavTrap const & src);
	~ScavTrap();

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);

};

#endif