#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <random>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{

public:
	/* Canonical Functions */
	NinjaTrap();
	NinjaTrap(NinjaTrap const & src);
	NinjaTrap(std::string name);
	NinjaTrap & operator = (NinjaTrap const & src);
	~NinjaTrap();

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	ninjaShoebox(ClapTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);


};

#endif
