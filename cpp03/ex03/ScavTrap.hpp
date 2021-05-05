#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

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
	void	challengeNewcomer(std::string const & target);

};

#endif