#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Zombie.hpp"

class ZombieEvent
{

public:

	ZombieEvent();
	// ~ZombieEvent();
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();

private:

	std::string	_type;

};

#endif
