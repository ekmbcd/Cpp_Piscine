#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Zombie.hpp"

class ZombieHorde
{

public:

	ZombieHorde(int N);
	~ZombieHorde();

	void announce() const;

private:
	Zombie*	_zombies;
	int		_n;

};

#endif
