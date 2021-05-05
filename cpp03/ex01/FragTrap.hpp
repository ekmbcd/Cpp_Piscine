#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <random>

class FragTrap
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
	FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap(std::string name);
	FragTrap & operator = (FragTrap const & src);
	~FragTrap();

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

};

#endif