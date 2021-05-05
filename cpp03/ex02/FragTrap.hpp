#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

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
	void	vaulthunter_dot_exe(std::string const & target);

};

#endif