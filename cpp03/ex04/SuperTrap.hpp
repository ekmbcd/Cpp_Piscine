#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <random>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap :  public FragTrap, public NinjaTrap
{

public:
	/* Canonical Functions */
	SuperTrap();
	SuperTrap(SuperTrap const & src);
	SuperTrap(std::string name);
	SuperTrap & operator = (SuperTrap const & src);
	~SuperTrap();

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

};

#endif