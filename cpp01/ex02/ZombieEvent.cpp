#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	srand((unsigned int)time(NULL));
}

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *tmp;
	std::string names[] = {"Cristiano", "Mario", "Umberto", "Mattia", "Flavio", "Elena", "Andrea", "Alex", "Alessandro"};
	int r = rand() % sizeof(names) / sizeof (std::string);
	//std::cout << r << std::endl;
	tmp = newZombie(names[r]);
	tmp->announce();
	return(tmp);

}
